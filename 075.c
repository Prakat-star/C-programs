//75.	C program to calculate the area of Cube
#include <stdio.h>
int main()
{
    float side, area;
    printf("Enter the side of the cube: ");
    scanf("%f", &side);
    area = 6 * side * side;
    printf("Area of the cube: %f\n", area);
    return 0;
}