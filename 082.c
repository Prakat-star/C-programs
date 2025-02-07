//C program to read coordinate points and determine its quadrant
#include <stdio.h>
int main()
{
    float x, y;
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);
    if (x > 0 && y > 0)
    {
        printf("The point lies in the first quadrant\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("The point lies in the second quadrant\n");
    }
    else if (x < 0 && y < 0)
    {
        printf("The point lies in the third quadrant\n");
    }
    else if (x > 0 && y < 0)
    {
        printf("The point lies in the fourth quadrant\n");
    }
    else if (x == 0 && y == 0)
    {
        printf("The point lies at the origin\n");
    }
    else if (x == 0 && y != 0)
    {
        printf("The point lies on the y-axis\n");
    }
    else if (x != 0 && y == 0)
    {
        printf("The point lies on the x-axis\n");
    }
    return 0;
}