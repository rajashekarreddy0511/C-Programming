#include <stdio.h>
int main()
{
    int choice;
    float balance = 1000, amount;
    printf("1. Deposit\n");
    printf("2. Withdraw\n");
    printf("3. Check Balance\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = balance + amount;
            printf("Amount deposited successfully\n");
            printf("Balance = %f", balance);
            break;
        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);
            if(amount <= balance)
            {
                balance = balance - amount;
                printf("Amount withdrawn successfully\n");
                printf("Balance = %f", balance);
            }
            else
            {printf("Insufficient balance");}       
            break;
        case 3:
            printf("Balance = %f", balance);
            break;
        default:
            printf("Invalid choice");
    }
   return 0;
}