#include <stdio.h>

int main()
{
    int a,b ;
    printf("enter two numbers ");
    scanf("%d %d", &a,&b);

    printf("sum of two numbers %d\n", a + b);
    printf("subtraction %d\n", a-b);
    printf("multiplication %d\n", a*b);
    printf("division %d\n", a/b);
    printf("remainder %d\n", a%b);
}
