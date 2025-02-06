//C program to find area and perimeter of the rectangle 
#include <stdio.h>
int main()
{
    float length, breadth, area, perimeter;
    printf("Enter length and breadth of the rectangle: ");
    scanf("%f %f", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area of rectangle = %.2f sq. units\n", area);
    printf("Perimeter of rectangle = %.2f units\n", perimeter);
    return 0;
}