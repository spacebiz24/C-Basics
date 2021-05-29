#include <stdio.h>
#include <stdlib.h>

void main(){
    int num;
    printf("Enter the number for cube table: \n");
    scanf("%d\n", &num);
    for (int i = 0; i <= num; i++)
        printf("Number is %d and it's cube is %d\n", i, i*i*i);
}