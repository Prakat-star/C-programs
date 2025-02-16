//329.	C Program to Read a Matrix and Print Diagonals
#include <stdio.h>
int main()
{
    int arr[100][100], r, c, i, j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The diagonal elements of the matrix are: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}