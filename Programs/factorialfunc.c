#include <stdio.h>
#include <stdlib.h>

void factorial(int n)
{
    int fact = 1;
    int num = n;
    while (n != 0)
    {
        fact *= n;
        n--;
    }
    printf("Factorial of %d is %d\n", num, fact);
}
void main()
{
    int num;
    printf("Enter number to find factorial:\n");
    scanf("%d", &num);
    factorial(num);
}