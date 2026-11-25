#include <stdio.h>

int main()
{
    char str[] = "HELLO";
    int i, vowels = 0, consonants = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == 'A' || str[i] == 'E' ||
           str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}