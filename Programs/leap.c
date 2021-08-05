#include <stdio.h>
#include <stdlib.h>

void main()
{
    int year;
    printf("Enter a year to check whether leap or not:\n");
    scanf("%d", &year);
    if (year % 4 == 0)
        printf("Year %d is a leap year\n", year);
    else
        printf("Year %d is not a leap year\n", year);
}