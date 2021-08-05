#include <stdio.h>
#include <stdlib.h>

void swapping_function(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void main()
{
    int a, b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("Before Swapping:\n");
    printf("A = %d\nB = %d\n", a, b);
    swapping_function(&a, &b);
    printf("After Swapping:\n");
    printf("A = %d\nB = %d\n", a, b);
}