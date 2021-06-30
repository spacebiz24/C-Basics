#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d, r1, r2;
    printf("Enter a, b, c of the equation:\n");
    scanf("%f %f %f", &a, &b, &c);
    d = b * b - 4 * a * c;
    if (d == 0)
    {
        printf("Roots are real and equal\n");
        r1 = -b + sqrt(d);
        printf("Roots are %f\n", r1);
    }
    else if (d > 0)
    {
        printf("Roots are real and distinct\n");
        r1 = -b + sqrt(d);
        r2 = -b - sqrt(d);
        printf("Roots are %f, %f", r1, r2);
    }
    else
    {
        printf("Roots are not real\n");
        r1 = -b / 2 * a;
        r2 = sqrt(fabs(d)) / 2 * a;
        printf("Roots are:\n");
        printf("R1 is %f + i%f\n", r1, r2);
        printf("R2 is %f - i%f\n", r1, r2);
    }
    return 0;
}