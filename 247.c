//247.	C program to calculate the sum of the series 1^3 -2^3 + 3^3 - 4^3 + ... N^3
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum -= pow(i, 3);
        }
        else
        {
            sum += pow(i, 3);
        }
    }
    printf("The sum of the series is: %d", sum);
    return 0;
}