#include <stdio.h>

int reverseof(int n,int rev)
{
    if(n==0){
    return rev;}
return reverseof(n/10,rev*10+n%10);
}

int main()
{
    int num;
    scanf("%d",&num);
    printf("%d", reverseof(num,0));

    return 0;
}