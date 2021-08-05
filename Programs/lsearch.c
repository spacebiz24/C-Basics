#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[100], ele, n, flag = 0, i;
    printf("Enter the number of elements in the array:\n");
    scanf("%d", &n);
    printf("Enter the array elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search for:\n");
    scanf("%d", &ele);
    for (i = 0; i < n; i++)

        if (arr[i] == ele)
        {
            break;
            flag = 1;
        }
    if (flag == 0)
        printf("Element not found\n");
    else
        printf("Element found at position %d\n", i + 1);
}