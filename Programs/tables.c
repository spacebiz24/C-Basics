#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num;
    printf("Enter the number for multiplication tables: \n");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", num, i, num * i);
}