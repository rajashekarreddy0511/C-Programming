#include <stdio.h>

int main()
{
    float n, i = 1, sum = 0;
    printf("Enter n: ");
    scanf("%f", &n);
start:
    if(i <= n)
    {
        sum = sum + i;
        i++;
        goto start;
    }
    printf("Sum = %f", sum);
    return 0;
}