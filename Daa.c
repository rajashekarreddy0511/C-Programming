#include<stdio.h>
int main()
{
    FILE *fp;
    int n,sum=0;
    fp=fopen("DATA", "w");
    for(n=1; n<=5; n++)
    putw(n, fp);
    fclose(fp);
    fp=fopen("DATA", "r");
    printf("values: ");
    while((n=getw(fp))!=EOF)
    {
        printf("%d\n",n);
        sum=sum+n;
    }
    printf("sum=%d\n",sum);
    fclose(fp);
    return 0;
}