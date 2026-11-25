#include <stdio.h>
int main()
{
    int a[] = {5, 12, 18, 25, 30};
    int i;
    for(i=0; i<=4; i++)
    {if(a[i]%2 == 0)
    {printf("%d is even\n",a[i]);}
    else
    {printf("%d is odd\n",a[i]);}}
}