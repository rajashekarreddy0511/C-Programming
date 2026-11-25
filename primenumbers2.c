#include <stdio.h>
int main()
{
    int a, i = 2;
    printf("Enter the number: ");
    scanf("%d", &a);
    for(i = 2; i < a; i++)
    {
        if(a % i == 0)
        {
    printf("Not a prime number");
    return 0;
        }
    }
    printf("Prime number");
}