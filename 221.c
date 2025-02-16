//251.	C program to find the sum of the Geometric Progression (G.P.) series
#include <stdio.h>
#include <math.h>
int main()
{
    int a, r, n;
    float sum = 0;
    printf("Enter the first term, common ratio and number of terms of the G.P. series: ");
    scanf("%d %d %d", &a, &r, &n);
    sum = (a * (pow(r, n) - 1)) / (r - 1);
    printf("The sum of the G.P. series is: %.2f\n", sum);
    return 0;
}