//C Program to find multiplication of two matrices
#include <stdio.h>
int main()
{
    int arr1[100][100], arr2[100][100], mul[100][100], r1, c1, r2, c2, i, j, k;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter the elements of the first matrix: ");
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    printf("Enter the elements of the second matrix: ");
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    if (c1 != r2)
    {
        printf("The multiplication isn't possible.\n");
    }
    else
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < c1; k++)
                {
                    mul[i][j] += arr1[i][k] * arr2[k][j];
                }
            }
        }
        printf("The multiplication of the two matrices is:\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d ", mul[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}