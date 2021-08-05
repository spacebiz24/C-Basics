#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    if (isalpha(ch))
        printf("The entered character is an alphabet\n", ch);
    if (isdigit(ch))
        printf("The entered character is a digit\n", ch);
    if (ispunct(ch))
        printf("The entered character is a punctuation\n", ch);
    if (isspace(ch))
        printf("The entered character is a space\n", ch);
}