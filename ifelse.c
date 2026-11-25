#include<stdio.h>
int main()
{
    int n;
    printf("enter the number: ");
    scanf("%d", &n);

    if(n>9)
      {if(n%2 == 0)
      printf("n is even");
    else
      {printf("n is odd");}}
     else
     {printf("number is invalid");}
      }