#include <stdio.h>
int main()
{
  int a[5],sum = 0,i;
  printf("Enter the number: ");
  for(i=0; i<5; i++)
  {scanf("%d",&a[i]);}
  for(i=0; i<5; i++)
  {sum=sum+(a[i]*a[i]);}
  printf("sum of squares of numbers=%d",sum);
}