//170.	C Program to find factorial of a number.
#include <stdio.h>
int main()
{
    int n, i = 1, fact = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= n)
    {
        fact *= i;
        i++;
    }
    printf("Factorial of %d is %d.\n", n, fact);
    return 0;
}