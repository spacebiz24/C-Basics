#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, n, fact = 1;
    printf("Enter number for factorial: \n");
    scanf("%d", &num);
    n = num;
    for (n; n >= 1; n--)
        fact = fact * n;
    printf("Factorial of %d is %d\n", num, fact);
}