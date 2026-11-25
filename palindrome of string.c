#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    char rev[20];
    int i,j=0;
    printf("enter the string: ");
    scanf("%s", str);
    for(i = strlen(str) - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }
    rev[j] = '\0';
    printf("%s\n", rev);
    if(strcmp(rev, str) == 0)
    printf("given string is a palindrome ");
    else
    printf("it is not a palindrome ");

    return 0;
}