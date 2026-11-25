#include<stdio.h>
int main()
{
	char Name[30],Branch[30];
	int age,ROLLNO ;
	float marks;
	printf("Enter Name,ROLLNO,Branch,age,marks: ");
	scanf("%s %d %s %d %f",&Name,&ROLLNO,&Branch,&age,&marks);
	printf("Name  : %s\n", Name);
    printf("ROLLNO : %d\n", ROLLNO);
    printf("Branch : %s\n",Branch);
	printf("age     : %d\n", age);
	printf("marks   : %2f\n",marks);
	return 0;
}