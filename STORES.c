#include<stdio.h>
struct salary
{
	char name[20];
	float basic;
	float allow;
};
struct employee
{
	int empno;
	struct salary pay;
	
};
int main()
{
	struct employee emp;
	printf("Enter Employee details");
	scanf("%d %s %f %f",&emp.empno,emp.pay.name,&emp.pay.basic,&emp.pay.allow);
	printf("%s with %d earns %.2f",emp.pay.name,emp.empno,
	                                    emp.pay.basic + emp.pay.allow);
    return 0;
}