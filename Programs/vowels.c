#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c;
    printf("Enter character to determine if it is a vowel or not: \n");
    scanf("%c", &c);
    switch (c)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u': printf("%c is a vowel.\n", c);
        break;
    default:
        printf("%c is not a vowel.\n", c);
    }
}