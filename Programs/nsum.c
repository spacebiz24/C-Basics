#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    printf("Enter n: ");
    scanf("%d\n", &n);
    printf("Even Numbers: \n");
    for (int i = 0; i <= n; i += 2)
        printf("%d\n", i);
    printf("Odd Numbers: \n");
    for (int i = 1; i <= n; i += 2)
        printf("%d\n", i);
}