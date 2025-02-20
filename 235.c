//235.	C program to reverse an integer number using recursion.
#include <stdio.h>
int reverse(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reversed number = %d", reverse(n));
    return 0;
}
int reverse(int n)
{
    static int rev = 0, rem;
    if (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        reverse(n / 10);
    }
    return rev;
}
