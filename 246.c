//246.	C program to find the sum of series x + x/2! + x/4! + ... + x/n!
#include <stdio.h>
#include <math.h>

int main() {
    int i, n;
    float x, sum = 0, fact = 1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        fact = fact * i;
        sum = sum + x / fact;
    }
    printf("The sum of the series is: %f", sum);
    return 0;
}