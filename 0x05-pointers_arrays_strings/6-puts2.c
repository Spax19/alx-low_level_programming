#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string starting with the first one
 *
 * @str: input
 *
 * Return: str.
 */
void puts2(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        
    }
    printf("\n");
}
