#include <stdio.h>
#include <stdlib.h>

float res;

void add(float x, float y)
{
    res = x + y;
}
void subtract(float x, float y)
{
    res = x - y;
}
void multiply(float x, float y)
{
    res = x * y;
}
void divide(float x, float y)
{
    res = x / y;
}

void main()
{
    char op;
    float num1, num2;
    printf("Enter operator:\n");
    scanf("%c", &op);
    printf("Enter two numbers:\n");
    scanf("%f %f", &num1, &num2);
    switch (op)
    {
    case '+':
        add(num1, num2);
        break;
    case '-':
        subtract(num1, num2);
        break;
    case '*':
        multiply(num1, num2);
        break;
    case '/':
        divide(num1, num2);
        break;
    default:
        printf("Not a valid operator\n");
    }
    printf("Result is %f\n", res);
}