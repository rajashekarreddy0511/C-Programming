#include <stdio.h>

int main()
{
    int password;

    printf("Enter password: ");
    scanf("%d", &password);

    while (password != 1234)
    {
        printf("Wrong password. Try again.\n");
        printf("Enter password: ");
        scanf("%d", &password);
    }

    printf("Correct password!\n");

    return 0;
}