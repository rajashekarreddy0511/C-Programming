#include<stdio.h>
int main()
{
    int a=42;
    float b=356.456789;
    int n = 255;
    float pi = 3.14159;
    char ch = 'A';
    char nm[]= "rajashekar";
    printf("name:\tR Rajashekar Reddy\nRoll No:F5\n");
    printf("a=%5d\n",a);
    printf("a=%-5d\n",a);
    printf("b=%8.3f\n",b);

    printf("Decimal : %d\n",  n);
    printf("Hex     : %x\n",  n);
    printf("Octal   : %o\n",  n);
    printf("Float   : %.2f\n", pi);
    printf("char    : %c\n",   ch);
    printf("String  : %.4s\n", nm);
    printf("Percent : 100%%\n");

}