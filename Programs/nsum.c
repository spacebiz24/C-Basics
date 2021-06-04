#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n;
    int sumo = 0;
    int sume = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Even Numbers: \n");
    for (int i = 0; i <= n; i += 2)
    {
        printf("%d\n", i);
        sumo += i;
    }
    printf("Odd Numbers: \n");
    for (int j = 1; j <= n; j += 2)
    {
        printf("%d\n", j);
        sume += j;
    }
}