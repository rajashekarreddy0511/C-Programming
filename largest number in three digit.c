#include <stdio.h>

int main()
{
 int X,a,b,c;
 printf("enter the  three digit number: ");
 scanf("%d",&X);
 a=X/100;
 b=(X/10)%10;
 c=X%10;

 if((a>b && b>c) || (a>c && c>b))
 {printf("a is largest");}
 else if ((b>a && a>c) || (b>c && c>a))
 {printf("b is largest");}
 else 
 {printf("c is largest");}
}