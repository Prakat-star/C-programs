//76.	C program to calculate the volume of Cube
#include <stdio.h>
int main()
{
    float side, volume;
    printf("Enter the side of the cube: ");
    scanf("%f", &side);
    volume = side * side * side;
    printf("Volume of the cube: %f\n", volume);
    return 0;
}