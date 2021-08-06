#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num, count = 0;
    float sqroot;
    printf("Enter the number limit to print square root series: \n");
    scanf("%d", &num);
root:
    sqroot = sqrt(count);
    printf("%f\n", sqroot);
    count++;
    if (count <= num)
    {
        goto root;
        printf("Fin\n");
    }
}