#include<stdio.h>
int main()
{
   int i,N,K;
   printf("enter the number: ");
     scanf("%d",&N); 
   for(i=1; i<=10; i++)
   {
     K=N*i; 
   printf("%d * %d = %d\n", N, i, K);}
   }