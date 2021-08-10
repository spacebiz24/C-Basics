#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    char str1[100], str2[100], str[100];
    int len1, len2;
    printf("Enter first string:\n");
    gets(str1);
    printf("Enter second string:\n");
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    for (int i = 0; i < len1; i++)
        str[i] = str1[i];
    for (int i = 0; i < len2; i++)
        str[i + len1] = str2[i];
    printf("Final string is '%s'", str);
}