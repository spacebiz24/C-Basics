#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i = 0;
    int limit;
    printf("Enter the number limit to square: \n");
    scanf("%d", &limit);
    printf("Sqaured Numbers: \n");
    while (i <= limit)
    {
        printf("%d ", i * i);
        i++;
    }
}