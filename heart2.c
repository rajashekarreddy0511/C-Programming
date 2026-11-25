#include <stdio.h>

int main()
{
    int i, j, n;

    printf("Enter value for n: ");
    scanf("%d", &n);

    // Upper part of heart
    for (i = n / 2; i <= n; i += 2) {

        for (j = 1; j < n - i; j += 2)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        for (j = 1; j <= n - i; j++)
            printf(" ");

        for (j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // Lower part of heart
    for (i = n; i >= 1; i--) {

        for (j = i; j < n; j++)
            printf(" ");

        for (j = 1; j <= (2 * i - 1); j++)
            printf("*");

        printf("\n");
    }

    return 0;
}