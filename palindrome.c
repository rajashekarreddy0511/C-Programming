#include <stdio.h>
int main()
{
    int N, digit, reverse = 0;
    printf("Enter the number N: ");
    scanf("%d", &N);
    int original = N;
    while(N != 0)
    {
        digit = N % 10;
        reverse = reverse * 10 + digit;
        N = N / 10;
    }
    printf("Reversed number = %d\n", reverse);
    if(original == reverse)
    {printf("N is palindrome");}
    else 
    {printf("N is not a palindrome");}
    return 0;
}