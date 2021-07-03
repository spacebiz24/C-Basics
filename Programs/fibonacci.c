#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first = 1, second = 1, next, limit;
    printf("Enter the number of digits you want in the fibonacci series: ");
    scanf("%d", &limit);
    printf("%d ", first);
    printf("%d ", second);
    for (int i = 3
    ; i <= limit; i++)
    {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }
    return 0;
}