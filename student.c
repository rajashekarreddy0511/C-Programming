#include<stdio.h>
struct student
{
    char name[20];
    int RNO;
    char grade;
};
int main()
{
    int n,i;
    printf("enter no of students: ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0; i<n; i++)
   {
    printf("Enter student %d Information as Name,RNO and grade: ",i+1);
    scanf("%s%d %c",s[i].name,&s[i].RNO,&s[i].grade);}
     for(i=0; i<n; i++)
     {
        printf("student %d information: Name:%s\t RNO: %d\t grade:%c\n",i+1,s[i].name,s[i].RNO,s[i].grade);
     }
    return 0;
}