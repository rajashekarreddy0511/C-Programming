#include <stdio.h>

int main()
{
    float a,b;

    printf("Enter the numbers : ");
    scanf("%f%f", &a,&b);

    printf("\n1.addition");
    printf("\n2.subtraction");
    printf("\n3.multiplication");
    printf("\n4.division");

    int choice;
    printf("\nenter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Result = %f", a + b);
            break;
        case 2:
            printf("Result = %f", a - b);
            break;
        case 3:
            printf("Result = %f", a * b);
            break;
        case 4:
        if (b != 0)
            printf("Result = %f", a / b);
        else
            printf("cannot divide by zero");    
            break;
        default:
            printf("Invalid choice");
    }      
     return 0;
}