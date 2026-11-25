#include <stdio.h>

int main()
{
    int j=2,x=1,i;
    printf("%d ", x);
    for(i = 1; i <= 9; i++)
    {
    x = x+j;
    printf("%d ", x);
    j++;
 }
}