//23.	C program to demonstrate example of floor and ceil functions
#include<stdio.h>
#include<math.h>
int main()
{
    float a = 5.6, b = 5.2;
    printf("Floor of %.2f is %.2f\n", a, floor(a));
    printf("Ceil of %.2f is %.2f\n", a, ceil(a));
    printf("Floor of %.2f is %.2f\n", b, floor(b));
    printf("Ceil of %.2f is %.2f\n", b, ceil(b));
    return 0;
}