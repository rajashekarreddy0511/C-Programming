#include <stdio.h>
int main()
{
    int a=5,b=3,t;
    int i=1;
 goto start;
    t=a+b;
    printf("t value: %d\n",t);
start:
    t=a;a=b;b=t;
    printf("a=%d and b=%d\n",a,b);
loop:
    printf("%d\n", i);
    i++;
    if(i <= 5)
    goto loop;
printf("done");
    return 0;
}