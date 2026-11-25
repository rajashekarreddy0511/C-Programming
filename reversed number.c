#include <stdio.h>

int main()
{
 int X,a,b,c;
 printf("enter the  three digit number: ");
 scanf("%d",&X);
 a=X/100;
 b=(X/10)%10;
 c=X%10;
   printf("reversed number= %d%d%d", c,b,a);
}