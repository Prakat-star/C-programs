//280.	C program to find second smallest element in a one dimensional array
#include <stdio.h>
int main()
{
    int arr[100], n, i, min1, min2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (arr[0] < arr[1])
    {
        min1 = arr[0];
        min2 = arr[1];
    }
    else
    {
        min1 = arr[1];
        min2 = arr[0];
    }
    for (i = 2; i < n; i++)
    {
        if (arr[i] < min1)
        {
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2 && arr[i] != min1)
        {
            min2 = arr[i];
        }
    }
    printf("The second smallest element in the array is: %d\n", min2);
    return 0;
}