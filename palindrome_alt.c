#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num, onum, rnum = 0;
    printf("Enter the number: ");
    scanf("%d\n", &num);
    onum = num;
    while (onum != 0)
    {
        int mod = onum % 10;
        rnum = rnum * 10 + mod;
        onum = onum / 10;
    }
    if (rnum == num)
    {
        printf("%d is a palindrome\n", num);
    }
    else
        printf("%d is not a palindrome\n", num);
}