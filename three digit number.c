#include <stdio.h>

int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d",&a);
    if (a>=99 && a<1000)
    {printf("three digit positive number");}
    else if (-1000<a && a<-99)
    {printf("three digit negative number");}
    else
    {printf("not a three digit number");}

}