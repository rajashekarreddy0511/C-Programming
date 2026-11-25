#include<stdio.h>
int main()
{
   int a=10,y=20;
   int *p1 = &a;
   int *p2 = &y;
   printf("address of a=%d\n",p1);
   printf("address of y=%d\n",p2);
   p1=p1+1;
   printf("address=%u\n",p1);
   p2=p2-1;
   printf("address=%u\n",p2);
   return 0;
}