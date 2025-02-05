//18.	C program to find area and perimeter of circle
#include<stdio.h>
#define PI 3.14159
int main()
{
    float r, area, perimeter;
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    area = PI * r * r;
    perimeter = 2 * PI * r;
    printf("Area of circle = %.2f\n", area);
    printf("Perimeter of circle = %.2f\n", perimeter);
    return 0;
}