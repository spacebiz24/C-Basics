#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, count = 0;
    printf("Enter number to check prime or not prime:\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }
    if (count == 2)
        printf("%d is a prime number\n", num);
    else
        printf("%d is not a prime number\n", num);
    return 0;
}