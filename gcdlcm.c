#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, denum, rem, num1, num2, gcd, lcm;
    printf("Enter the numbers you want to find HCF: \n");
    scanf("%d\n%d\n", &num1, &num2);
    if (num1 > num2)
    {
        num = num1;
        denum = num2;
    }
    else
    {
        num = num2;
        denum = num1;
    }
    rem = num / denum;
    while (rem != 0)
    {
        num = denum;
        denum = rem;
        rem = num / denum;
    }
    gcd = denum;
    lcm = (num1 * num2) / gcd;
    printf("HCF of %d and %d is %d\n", num1, num2, gcd);
    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
}