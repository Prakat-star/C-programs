//C Program to find sum and subtraction of two matrices
#include <stdio.h>
int main()
{
    int arr1[100][100], arr2[100][100], sum[100][100], sub[100][100], r, c, i, j;
    printf("Enter the number of rows and columns of the matrices: ");
    scanf("%d %d", &r, &c);
    printf("Enter the elements of the first matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the elements of the second matrix: ");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
    printf("The sum of the two matrices is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("The subtraction of the two matrices is:\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    return 0;
}