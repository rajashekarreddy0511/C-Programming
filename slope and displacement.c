#include <stdio.h>
#include <math.h>

int main()
{
    float Y,m,x,c,s,u,t,a;
    printf("Enter the six values: ");
    scanf("%f%f%f%f%f%f",&m,&x,&c,&u,&t,&a);
    Y=m*x+c;
    printf("the slope is %f\n",Y);
    s=u*t+(1/2)*a*pow(t,2);
    printf("displacement is %f\n",s);
}