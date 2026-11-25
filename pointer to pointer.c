#include<stdio.h>
int main()
{
	int x,*p1,**p2;
	x=100;
	p1=&x;
	p2=&p1;
	printf("value of x: %d\n", x);
	printf("value of x using(*p1): %d\n", *p1);
	printf("value of x using(**p2): %d\n", **p2);
	printf("address of x: %u\n", p1);
	printf("address of p1: %u\n", p2);
	**p2 = 200;
	printf("value of x: %d", x);
	
	return 0;
}