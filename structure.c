#include<stdio.h>
struct item
{
    int m;
    float x;
    char c;
};
int main()
{
    struct item code;
    code.m=379;
    code.x=7.25;
    code.c='A';
    printf("m = %d\n",code.m);
    printf("c = %c\n",code.c);
    printf("x = %f\n",code.x);
    printf("size = %d\n",sizeof(code));
}