#include <stdio.h>

int main()
{
    int a = 0, b = 1, c, n, i = 1;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    while(i <= n)
    {
        printf("%d ", c);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
}