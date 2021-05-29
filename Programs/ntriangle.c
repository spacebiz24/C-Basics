#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Enter the size (number of rows) of the triangle: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d ", j);
        }
        printf("\n");
    }
}