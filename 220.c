//C program to check prime numbers in an array
#include <stdio.h>
int main()
{
    int arr[100], n, i, j, flag;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Prime numbers in the array are: ");
    for (i = 0; i < n; i++)
    {
        if (arr[i] <= 1)
        {
            continue;
        }
        flag = 1;
        for (j = 2; j <= arr[i] / 2; j++)
        {
            if (arr[i] % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}