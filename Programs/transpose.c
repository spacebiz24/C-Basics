#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr[100][100], arr_t[100][100], a, b;
    printf("Enter order of Matrix:\n");
    scanf("%d %d", &a, &b);
    printf("Enter Matrix elements:\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr[i][j]);
    printf("Original Matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            arr_t[j][i] = arr[i][j];
    printf("Transpose of Matrix:\n");
    if (a != b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            printf("%d ", arr_t[i][j]);
        printf("\n");
    }
}
