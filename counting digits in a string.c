#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "Raj123";
    int i, count = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isdigit((unsigned char)str[i]))
        {
            count++;
        }
    }

    printf("Number of digits = %d", count);

    return 0;
}