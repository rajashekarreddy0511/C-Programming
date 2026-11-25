#include<stdio.h>
union item
{
    int m;
    float x;
    char c;
};
int main()
{
    union item code;
    code.m=379;
    code.x=7.25;
    code.c='A';
    printf("m = %d\n",code.m);
    printf("x = %f\n",code.x);
    printf("c = %c\n",code.c);
    printf("size = %d\n",sizeof(code));
}