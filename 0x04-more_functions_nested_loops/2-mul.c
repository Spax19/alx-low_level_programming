#include "main.h"
#include <stdio.h>

/**
 * _mul -  a function that multiples two numbers
 * @c: input
 * Return: result of the two numbers
 */

int mul(int a, int b);

int main() {
    int x = 5;
    int y = 7;
    int z = mul(x, y);
    printf("%d * %d = %d\n", x, y, z);
    return 0;
}
