//242.	C program to calculate the sum of the series 1+(1+2) +(1+2+3) +(1+2+3+4) +...+(1+2+3+...+n)
#include <stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum += j;
        }
    }
    printf("The sum of the series is: %d", sum);
    return 0;
}