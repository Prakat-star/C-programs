//51.	C program to swap two numbers using four different methods
#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    // Method 1: Using a temporary variable
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    // Method 2: Using arithmetic operators
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    // Method 3: Using bitwise XOR operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("After swapping: a = %d, b = %d\n", a, b);
    // Method 4: Using single statement
    a = (a + b) - (b = a);
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}