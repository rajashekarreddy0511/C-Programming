#include <stdio.h>

int main()
{
    int day;

    printf("Enter a number: ");
    scanf("%d", &day);

    switch(day)
    {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        default:
            printf("Invalid number");
            break;
    }

    return 0;
}