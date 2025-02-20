//231.	C program to calculate power of a number using recursion.
#include <stdio.h>
int power(int base, int exp)
{
    if (exp != 0)
        return (base * power(base, exp - 1));
    else
        return 1;
}
int main()
{
    int base, exp;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter exponent number: ");
    scanf("%d", &exp);
    printf("Result: %d", power(base, exp));
    return 0;
}
