#include <stdio.h>

int main()
{
    char name[20], line[80];
    char ch;
    int c = 0;
    printf("Enter a name: ");
    scanf("%19s", name);
    printf("Name: %s\n", name);
    getchar();   // remove '\n' left by scanf()
    printf("Enter a line: ");
    fgets(name, sizeof(name), stdin);
    puts(name)
    printf("Enter another line: ");
    scanf("%79[^\n]", line);
    printf("%s\n", line);
    getchar();   // remove '\n'
    printf("Enter another line: ");
    c = 0;
    do
    {
        ch = getchar();
        line[c] = ch;
        c++;
    }
    while (ch != '\n');
    line[c - 1] = '\0';
    printf("Line: %s\n", line);
    printf("Characters one by one:\n");
    for (c = 0; line[c] != '\0'; c++)
    {
        printf("%c\n", line[c]);
    }
}