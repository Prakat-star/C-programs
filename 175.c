//175.	C program to print square, cube and square root of all numbers from 1 to N.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("Number: %d, Square: %d, Cube: %d, Square Root: %.2f\n", i, i * i, i * i * i, sqrt(i));
        i++;
    }
    return 0;
}