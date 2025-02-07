//C program to perform the ATM Transactions
#include <stdio.h>
int main()
{
    int choice;
    float amount, deposit, withdraw, balance = 5000;
    printf("*************** Welcome to ABC Bank ***************\n");
    printf("1. Check Balance\n");
    printf("2. Deposit\n");
    printf("3. Withdraw\n");
    printf("4. Exit\n");
    printf("***************************************************\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Your bank balance is %.2f\n", balance);
        break;
    case 2:
        printf("Enter the amount to deposit: ");
        scanf("%f", &deposit);
        balance += deposit;
        printf("Amount deposited successfully\n");
        printf("Your updated balance is %.2f\n", balance);
        break;
    case 3:
        printf("Enter the amount to withdraw: ");
        scanf("%f", &withdraw);
        if (withdraw > balance)
        {
            printf("Insufficient balance\n");
        }
        else
        {
            balance -= withdraw;
            printf("Amount withdrawn successfully\n");
            printf("Your updated balance is %.2f\n", balance);
        }
        break;
    case 4:
        printf("Thank you for using our service\n");
        break;
    default:
        printf("Invalid choice\n");
    }
    return 0;
}