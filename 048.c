//48.	C program to get remainder without using % operator
#include <stdio.h>
int main()
{
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend and divisor: ");
    scanf("%d %d", &dividend, &divisor);
    quotient = dividend / divisor;
    remainder = dividend - (quotient * divisor);
    printf("Remainder = %d\n", remainder);
    return 0;
}