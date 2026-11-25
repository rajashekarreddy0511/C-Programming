#include<stdio.h>
int main()
{
    FILE *f1,*f2,*f3;
    int ch;
    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "r");
    f3 = fopen("mergel.txt", "w");
    if(f1==NULL || f2==NULL)
    {
        printf("Cannot open file\n");
        return 0;
    }
    while((ch=fgetc(f1))!=EOF)
    {
        fputc(ch,f3);
    }
while((ch=fgetc(f2))!=EOF)
    {
        fputc(ch,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("Files merged successfully");
}