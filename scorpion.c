
#include <windows.h>
#include <windowsx.h>
#include <math.h>

#define PI 3.14159265358979323846
#define TIMER_ID 1

static float posX = 500, posY = 350;
static float angle = 0, phase = 0;

static float gX, gY, gCos, gSin;

static POINT tp(float lx, float ly)
{
    POINT p;
    p.x = (LONG)round(gX + lx*gCos - ly*gSin);
    p.y = (LONG)round(gY + lx*gSin + ly*gCos);
    return p;
}

static void lline(HDC hdc, float x1, float y1,
                  float x2, float y2)
{
    POINT a = tp(x1,y1);
    POINT b = tp(x2,y2);

    MoveToEx(hdc,a.x,a.y,NULL);
    LineTo(hdc,b.x,b.y);
}

static void lcircle(HDC hdc,float x,float y,int r)
{
    POINT c = tp(x,y);
    Ellipse(hdc,c.x-r,c.y-r,c.x+r,c.y+r);
}

static void lellipse(HDC hdc,float cx,float cy,
                     float rx,float ry)
{
    POINT pts[36];
    int i;

    for(i=0;i<36;i++)
    {
        float a = (float)(i*2*PI/36);
        pts[i] = tp(cx+cos(a)*rx,cy+sin(a)*ry);
    }

    Polygon(hdc,pts,36);
}

static void drawScorpion(HDC hdc,float x,float y,
                         float rot,float ph)
{
    int i,s;

    float tailX[7] = {-35,-65,-90,-85,-60,-20,5};
    float tailY[7] = {0,-25,-60,-100,-130,-145,-125};

    HBRUSH bodyBrush = CreateSolidBrush(RGB(45,45,50));
    HBRUSH darkBrush = CreateSolidBrush(RGB(20,20,25));
    HBRUSH eyeBrush = CreateSolidBrush(RGB(255,60,30));

    HPEN bodyPen = CreatePen(PS_SOLID,3,RGB(130,130,140));
    HPEN legPen = CreatePen(PS_SOLID,4,RGB(100,100,110));
    HPEN clawPen = CreatePen(PS_SOLID,5,RGB(150,150,160));
    HPEN tailPen = CreatePen(PS_SOLID,8,RGB(80,80,90));
    HPEN stingPen = CreatePen(PS_SOLID,5,RGB(180,180,190));

    HGDIOBJ oldPen = SelectObject(hdc,legPen);
    HGDIOBJ oldBrush = SelectObject(hdc,bodyBrush);

    gX=x;
    gY=y;
    gCos=cos(rot);
    gSin=sin(rot);

    /* Legs */
    for(s=-1;s<=1;s+=2)
    {
        for(i=0;i<4;i++)
        {
            float bx=25-i*17;
            float sw=sin(ph+i*(PI/2)+(s>0?PI:0))*8;

            lline(hdc,bx,s*18,bx-8+sw*.5f,s*42);
            lline(hdc,bx-8+sw*.5f,s*42,
                  bx-22+sw,s*60);
        }
    }

    /* Body */
    SelectObject(hdc,bodyPen);
    lellipse(hdc,0,0,45,30);

    SelectObject(hdc,darkBrush);
    lellipse(hdc,55,0,20,27);

    /* Claws */
    SelectObject(hdc,clawPen);

    for(s=-1;s<=1;s+=2)
    {
        lline(hdc,55,s*15,105,s*45);
        lline(hdc,105,s*45,135,s*30);
        lline(hdc,105,s*45,135,s*60);
    }

    /* Tail */
    SelectObject(hdc,tailPen);

    for(i=0;i<7;i++)
        tailY[i]+=0; /* Keep original tail positions */

    for(i=0;i<6;i++)
    {
        float y1=tailY[i];
        float y2=tailY[i+1];

        y1+=sin(ph*.5f+i*.6f)*(2+i);
        y2+=sin(ph*.5f+(i+1)*.6f)*(3+i);

        lline(hdc,tailX[i],y1,tailX[i+1],y2);
        lcircle(hdc,tailX[i+1],y2,11);
    }

    /* Stinger */
    SelectObject(hdc,stingPen);

    lline(hdc,tailX[6],tailY[6],
          tailX[6]+25,tailY[6]-25);

    lline(hdc,tailX[6]+25,tailY[6]-25,
          tailX[6]+15,tailY[6]-5);

    /* Eyes */
    SelectObject(hdc,bodyPen);
    SelectObject(hdc,eyeBrush);

    lcircle(hdc,62,-10,5);
    lcircle(hdc,62,10,5);

    /* Restore GDI objects */
    SelectObject(hdc,oldPen);
    SelectObject(hdc,oldBrush);

    DeleteObject(bodyBrush);
    DeleteObject(darkBrush);
    DeleteObject(eyeBrush);

    DeleteObject(bodyPen);
    DeleteObject(legPen);
    DeleteObject(clawPen);
    DeleteObject(tailPen);
    DeleteObject(stingPen);
}

LRESULT CALLBACK WindowProc(HWND hwnd,UINT msg,
                            WPARAM wParam,LPARAM lParam)
{
    switch(msg)
    {
        case WM_CREATE:
            SetTimer(hwnd,TIMER_ID,16,NULL);
            return 0;

        case WM_TIMER:
        {
            POINT p;
            float dx,dy,dist,diff;

            GetCursorPos(&p);

            dx=p.x-posX;
            dy=p.y-posY;

            dist=sqrt(dx*dx+dy*dy);

            if(dist>2)
            {
                diff=atan2(dy,dx)-angle;

                while(diff>PI) diff-=2*PI;
                while(diff<-PI) diff+=2*PI;

                angle+=diff*.15f;
            }

            posX+=dx*.08f;
            posY+=dy*.08f;

            phase+=dist*.02f+.03f;

            InvalidateRect(hwnd,NULL,FALSE);
            return 0;
        }

        case WM_ERASEBKGND:
            return 1;

        case WM_PAINT:
        {
            PAINTSTRUCT ps;
            HDC hdc=BeginPaint(hwnd,&ps);

            RECT rc;
            GetClientRect(hwnd,&rc);

            HDC mem=CreateCompatibleDC(hdc);
            HBITMAP bmp=CreateCompatibleBitmap(
                hdc,rc.right,rc.bottom);

            if(mem && bmp)
            {
                HGDIOBJ oldBmp=SelectObject(mem,bmp);

                HBRUSH bg=CreateSolidBrush(
                    RGB(0,0,0));

                FillRect(mem,&rc,bg);
                DeleteObject(bg);

                drawScorpion(mem,posX,posY,angle,phase);

                BitBlt(hdc,0,0,rc.right,rc.bottom,
                       mem,0,0,SRCCOPY);

                SelectObject(mem,oldBmp);
                DeleteObject(bmp);
            }
            else
            {
                if(bmp) DeleteObject(bmp);
            }

            if(mem) DeleteDC(mem);

            EndPaint(hwnd,&ps);
            return 0;
        }

        case WM_DESTROY:
            KillTimer(hwnd,TIMER_ID);
            PostQuitMessage(0);
            return 0;
    }

    return DefWindowProc(hwnd,msg,wParam,lParam);
}

int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrev,
                   LPSTR cmd,
                   int nCmdShow)
{
    const char CLASS_NAME[]="ScorpionOverlay";

    WNDCLASS wc={0};
    HWND hwnd;
    MSG msg;

    wc.lpfnWndProc=WindowProc;
    wc.hInstance=hInstance;
    wc.lpszClassName=CLASS_NAME;

    RegisterClass(&wc);

    int sw=GetSystemMetrics(SM_CXSCREEN);
    int sh=GetSystemMetrics(SM_CYSCREEN);

    hwnd=CreateWindowEx(
        WS_EX_LAYERED |
        WS_EX_TRANSPARENT |
        WS_EX_TOPMOST |
        WS_EX_TOOLWINDOW,
        CLASS_NAME,
        "Scorpion Cursor",
        WS_POPUP,
        0,0,sw,sh,
        NULL,NULL,hInstance,NULL
    );

    if(!hwnd) return 0;

    SetLayeredWindowAttributes(
        hwnd,RGB(0,0,0),0,LWA_COLORKEY);

    ShowWindow(hwnd,SW_SHOW);

    while(GetMessage(&msg,NULL,0,0)>0)
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return 0;
}
