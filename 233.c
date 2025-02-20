//233.	C program to find sum of all digits using recursion.
#include <stdio.h>
int sum(int n)
{
    if (n == 0)
        return 0;
    return (n % 10 + sum(n / 10));
}
int main()
{
    int num;
    printf("Enter any number to find sum of digits: ");
    scanf("%d", &num);
    printf("Sum of digits of %d = %d", num, sum(num));
    return 0;
}