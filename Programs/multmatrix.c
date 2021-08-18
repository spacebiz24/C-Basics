#include <stdio.h>
#include <stdlib.h>

void main()
{
    int arr1[100][100], arr2[100][100], res[100][100];
    int a, b, c, d;
    printf("Enter order of Matrix 1:\n");
    scanf("%d %d", &a, &b);
    printf("Enter order of Matrix 2:\n");
    scanf("%d %d", &c, &d);
    if (b != c)
    {
        printf("Invalid Order\n");
        exit(0);
    }
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            scanf("%d", &arr1[i][j]);
    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < c; i++)
        for (int j = 0; j < d; j++)
            scanf("%d", &arr2[i][j]);
    for (int i = 0; i < a; i++)
        for (int j = 0; j < d; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c; k++)
                res[i][j] += arr1[i][k] * arr2[k][j];
        }
    printf("Resultant Matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
            printf("%d ", res[i][j]);
        printf("\n");
    }
}