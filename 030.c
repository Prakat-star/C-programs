//C Program to calculate Employee and Employer Provident Fund
#include<stdio.h>
int main()
{
    float basic, da, hra, pf, epf, gross, net;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = basic * 0.25;
    hra = basic * 0.15;
    pf = basic * 0.12;
    epf = basic * 0.03;
    gross = basic + da + hra;
    net = gross - pf - epf;
    printf("Gross salary = %.2f\n", gross);
    printf("Net salary = %.2f\n", net);
    return 0;
}