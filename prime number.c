#include<stdio.h>
int main()
{
  int a,i,factors=0;
  printf("enter the number: ");
   scanf("%d",&a);
   for(i=2; i<a; i++)  
   {if(a % i == 0)
    {
        factors++;
    }
  }
  if(factors == 0)
    {printf("prime number");}
     else
     {printf("not a pirme number");}
}