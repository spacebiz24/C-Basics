#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[100], *ptr, sum = 0, n, i;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter elements of array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    ptr = &arr[0];
    for (i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    printf("Sum of array elements is %d", sum);
}