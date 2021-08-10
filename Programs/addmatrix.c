#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr1[100][100], arr2[100][100];
    int a, b;
    printf("Enter order of Matrix 1 and 2:\n");
    scanf("%d %d", &a, &b);
    printf("Enter Matrix 1\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr1[i][j]);
    printf("Enter Matrix 2\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr2[i][j]);
    printf("Matrix Addition:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            printf("%d ", arr1[i][j]);
        printf("\n");
    }
    printf("+\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            printf("%d ", arr1[i][j]);
        printf("\n");
    }
    printf("=\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            printf("%d ", arr1[i][j] + arr2[i][j]);
        printf("\n");
    }
}