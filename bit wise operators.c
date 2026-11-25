#include<stdio.h>
int main()
{
    int a,b,x;
    printf("enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("bitwise AND=%d\n",a&b);
    printf("bitwise OR=%d\n",a|b);
    printf("bitwise Ex-OR=%d\n",a^b);
    printf("Leftshift=%d %d\n",a<<2,b<<1);
    printf("Rightshift=%d %d\n",a>>1,b>>2);

}