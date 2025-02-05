//12.	Program to find gross salary of an employee
#include<stdio.h>
int main()
{
    float bs, da, hra, gs;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &bs);
    da = bs * 0.4;
    hra = bs * 0.2;
    gs = bs + da + hra;
    printf("Gross salary of an employee = %.2f\n", gs);
    return 0;
}