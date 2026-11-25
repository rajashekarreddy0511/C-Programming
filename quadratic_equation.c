#include <stdio.h>
#include <math.h>
int main()
{
   float X,Y,a,b,c;
   printf("enter three numbers: ");
   scanf("%f%f%f",&a,&b,&c);
   X=(-b+pow(b*b-4*a*c,0.5))/(2*a);
   Y=(-b-pow(b*b-4*a*c,0.5))/(2*a);
   printf("X= %f\n",X);
   printf("Y= %f",Y);
}