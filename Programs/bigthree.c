#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a, b, c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d", &a, &b, &c);
    (a > b) ? ((a > c) ? printf("%d is Biggest", a) : printf("%d is Biggest", c)) : (b > c) ? printf("%d is Biggest", b)
                                                                                            : printf("%d is Biggest", c);
}