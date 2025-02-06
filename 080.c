//80.	C program to calculate the surface area, volume of the Sphere
#include <stdio.h>
#include <math.h>
int main()
{
    float r, sa, volume;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &r);
    sa = 4 * 3.14 * r * r;
    volume = 4.0 / 3.0 * 3.14 * r * r * r;
    printf("Surface area of the sphere: %f\n", sa);
    printf("Volume of the sphere: %f\n", volume);
    return 0;
}