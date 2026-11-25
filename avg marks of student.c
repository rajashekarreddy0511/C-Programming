#include <stdio.h>

int main()
{
    int a, b, c ,avg;

    printf("Enter the marks: ");
    scanf("%d %d %d", &a, &b, &c);
    avg=(a+b+c)/3;
    printf("average marks %d\n", avg);
    if (avg>80)
    {printf("A grade");}
     else if (avg>65)
    {printf("B grade");}
    else if (avg>50)
    {printf("C grade");}

    else {printf("fail");}
    return 0;
} 