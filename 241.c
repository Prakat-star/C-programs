//241.	C program to calculate the sum of the series 1-2+3-4+5-6+7-8...N terms
#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= i;
        }
        else
        {
            sum += i;
        }
    }
    printf("The sum of the series is: %d", sum);
    return 0;
}