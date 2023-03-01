#include <stdio.h>

/**
 * _mul -  a function that multiples two numbers
 *
 * @c: input
 *
 * Return: result of the two numbers
 */
int mul(int a, int b);

int main(void) 
{
    int a = 5;
    int b = 6;
    int result = mul(a, b);

    printf("%d * %d = %d\n", a, b, result);

    return 0;
}
