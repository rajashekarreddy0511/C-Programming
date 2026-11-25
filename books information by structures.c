#include<stdio.h>
struct book_bank
{
    char title[20];
    int page;
    float price;
};
int main()
{
    struct book_bank b1,b2;
    printf("Enter title,no of pages,price: ");
    scanf("%s%d%f",b1.title,&b1.page,&b1.price);
    printf("BOOK1 information: \n");
    printf("\nTitle: %s",b1.title);
    printf("\nno of pages: %d",b1.page);
    printf("\nPrice: %.0f\n",b1.price);

    printf("Enter title,no of pages,price: ");
    scanf("%s%d%f",b2.title,&b2.page,&b2.price);
    printf("BOOK2 information: \n");
    printf("\nTitle: %s",b2.title);
    printf("\nno of pages: %d",b2.page);
    printf("\nPrice: %.0f",b2.price);
}