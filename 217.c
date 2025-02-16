//332.	C Program to print lower diagonal of a matrix

#include <stdio.h>
int main()
{
    int i, j, r, c;
    int arr[100][100];
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the matrix: ");
    scanf("%d", &arr[0][0]);
    for (i = 1; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (j <= i)
            {
                scanf("%d", &arr[i][j]);
            }
            else
            {
                arr[i][j] = 0;
            }
        }
    }
    printf("The lower diagonal elements of the matrix are: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (j <= i)
            {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
    
}