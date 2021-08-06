#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[100], n, ele, high, low, mid;
    printf("Enter number of elements in array:\n");
    scanf("%d", &n);
    printf("Enter array elements in ascending order:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter the element to search for:\n");
    scanf("%d", &ele);
    low = 0;
    high = n - 1;
    while (!(low > high))
    {
        if (arr[mid] == ele)
        {
            break;
        }
        else if (arr[mid] > ele)
        {
            high = mid;
            low = 0;
        }
        else if (arr[mid] < ele)
        {
            high = n - 1;
            low = mid;
        }
        mid = low + high / 2;
    }
    if (!(low > high))
        printf("Element found at position %d\n", mid + 1);
}