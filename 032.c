//32.	Write a C program to evaluate the net salary of an employee given the following constraints

#include <stdio.h>

int main() {
    float basicSalary, da, hra, ta, otherAllowances;
    float pf, it;
    float grossSalary, netSalary;

    printf("Enter Basic Salary: ");
    scanf("%f", &basicSalary);

    printf("Enter Dearness Allowance (DA): ");
    scanf("%f", &da);

    printf("Enter House Rent Allowance (HRA): ");
    scanf("%f", &hra);

    printf("Enter Travel Allowance (TA): ");
    scanf("%f", &ta);

    printf("Enter Other Allowances: ");
    scanf("%f", &otherAllowances);

    grossSalary = basicSalary + da + hra + ta + otherAllowances;

    pf = 0.12 * basicSalary;

    it = 0.10 * grossSalary;

    netSalary = grossSalary - pf - it;

    printf("\nGross Salary: %.2f\n", grossSalary);
    printf("Provident Fund (PF) Deduction: %.2f\n", pf);
    printf("Income Tax (IT) Deduction: %.2f\n", it);
    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}