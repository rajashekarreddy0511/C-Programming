#include<stdio.h> 
int main()
{
    float a,b,c,d,e,R;
    printf("enter five numbers: ");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    R=(a+b*c)/((d-e)+a*(b-c));
    printf("result of expression=%f",R);

}