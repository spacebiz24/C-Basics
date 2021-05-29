#include <stdio.h>
#include <stdlib.h>

void main()
{
    int num[100], size, count = 0;
    int i, j, k, l;
    printf("Enter the number of digits in number: \n");
    scanf("%d", &size);
    printf("Enter the number to check palindromicity: \n");
    for (i = 0; i < size; i++)
        scanf("%d", &num[i]);
    printf("Your number is: \n");
    for (k = 0; k < size; k++)
        printf("%d\n", num[k]);
    for (l = 0, j = size - 1; l < size, j >= 0; l++, j--)
    {
        if (num[l] == num[j])
            count++;
    }
    if (count == size)
        printf("Number is a palindrome\n");
    else
        printf("Number is not a palindrome\n");
}