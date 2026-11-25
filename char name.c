#include <stdio.h>

int main()
{
    char name[40] ;

    printf("Enter a name: ");
    scanf("%s", &name);

    printf("You entered: %s\n", name);

    return 0;
}