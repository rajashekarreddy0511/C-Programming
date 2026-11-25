#include<stdio.h>
struct book
{
    int pages;
    float price;
    char name[20];
};
int main()
{
    struct book b;
    struct book *p=&b;
    printf("enter the values: ");
    scanf("%d %f %s",&p->pages,&p->price,p->name);
    printf("%d %.2f %s\n",p->pages,p->price,p->name);
    return 0;
}