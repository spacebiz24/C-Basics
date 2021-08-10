#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[100], n, temp;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Before Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("After Sorting:\n");
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}