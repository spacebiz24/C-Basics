#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int trace = 0, sum = 0, a, arr[100][100];
    float norm;
    printf("Enter order of the matrix:\n");
    scanf("%d", &a);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < a; i++)
        for (int j = 0; j < a; j++)
            scanf("%d", &arr[i][j]);
    printf("The matrix is:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a; j++)
        {
            if (i == j)
                trace += arr[i][j];
            sum += arr[i][j] * arr[i][j];
        }
    }
    norm = sqrt(sum);
    printf("Trace of matrix is %d\n", trace);
    printf("Normal of matrix is %f\n", norm);
}