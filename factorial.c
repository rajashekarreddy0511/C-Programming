#include<stdio.h>
int main()
{
  int i,fact=1,N;
  printf("enter the number: ");
  scanf("%d",&N);
  for(i=1; i<=N; i++)
  {
    fact = fact * i;  }
{printf("N!= %d", fact);}
}