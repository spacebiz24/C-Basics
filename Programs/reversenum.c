#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, onum, rnum = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    onum = num;
    while (onum != 0)
    {
        int mod = onum % 10;
        rnum = rnum * 10 + mod;
        onum = onum / 10;
    }
    printf("Original number is %d\n", num);
    printf("Reversed number is %d\n", rnum);
}