#include<stdio.h>
int main()
{
   int even_count = 0,odd_count = 0,K,i;
   for(i=0; i<=40; i++)
   {
    if(i % 2 == 0)
    even_count++;
    else
   odd_count++;
}
  printf("total even numbers: %d\n", even_count);
  printf("total odd numbers: %d\n", odd_count);
}