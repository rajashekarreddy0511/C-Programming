#include<stdio.h>
int main()
{
    int a,x,b,y;
    printf("enter three numbers: ");
    scanf("%d%d%d", &a,&x,&b);
    y=(a*x+b)/(a*x-b);
    printf("reesult of expression=%d",y);
    
}