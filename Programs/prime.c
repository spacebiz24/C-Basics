#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Enter the limits of prime number series:\n");
    scanf("%d %d", &a, &b);
    printf("Prime number series:\n");
    int count = 0;
    for (int i = a; i <= b; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d ", i);
        count = 0;
    }
    return 0;
}