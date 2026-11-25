#include <stdio.h>

int main()
{
 int X,a,b,c,sum;
 printf("enter the  three digit number: ");
 scanf("%d",&X);
 a=X/100;
 b=(X/10)%10;
 c=X%10;
   sum=a+b+c;
   printf("sum of digit= %d", sum);
}