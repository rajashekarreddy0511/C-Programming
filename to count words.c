#include <stdio.h>

int main()
{
    char str[] = "I love programming";
    int i, words = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
        {
            words++;
        }
    }

    printf("Number of words = %d", words);

    return 0;
}