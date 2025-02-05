//19.	C program to find area of a rectangle
#include<stdio.h>
int main()
{
    float l, b, area;
    printf("Enter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);
    area = l * b;
    printf("Area of rectangle = %.2f\n", area);
    return 0;
}
