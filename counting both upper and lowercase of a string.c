#include <stdio.h>
#include <ctype.h>

int main()
{
    char str[] = "Hello World";
    int i, upper = 0, lower = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(isupper((unsigned char)str[i]))
        {
            upper++;
        }
        else if(islower((unsigned char)str[i]))
        {
            lower++;
        }
    }

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d", lower);

    return 0;
}