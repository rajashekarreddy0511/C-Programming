#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("a.txt","w");
    fclose(fp);
    return 0;
}