//C program to calculate sum of the series 1 + 11 + 111 + 1111 + ... N terms
#include <stdio.h>
#include <math.h>
int main()
{
    int i, n, sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + (pow(10, i) - 1) / 9;
    }
    printf("The sum of the series is: %d", sum);
    return 0;
}