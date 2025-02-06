//C program to calculate the area of a triangle given base and height
#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Enter the base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("Area of the triangle: %f\n", area);
    return 0;
}
