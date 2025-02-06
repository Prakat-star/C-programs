//C program to calculate profit or loss
#include <stdio.h>
int main()
{
    float cp, sp, profit, loss;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp > cp)
    {
        profit = sp - cp;
        printf("Profit = %.2f\n", profit);
    }
    else if (cp > sp)
    {
        loss = cp - sp;
        printf("Loss = %.2f\n", loss);
    }
    else
    {
        printf("No Profit No Loss\n");
    }
    return 0;
}