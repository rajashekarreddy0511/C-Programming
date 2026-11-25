#include <stdio.h>
int main()
{
    FILE *fp;
    int c;
    fp = fopen("b.txt", "w");
    while ((c = getchar()) != '\n')
    putc(c, fp);
    fclose(fp);
    fp = fopen("b.txt", "r");
    while ((c = getc(fp)) != EOF)
    printf("%c", c);
    fclose(fp);
    return 0;
}