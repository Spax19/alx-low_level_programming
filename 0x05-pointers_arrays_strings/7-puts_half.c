#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - prints only half of the string and if the length is an odd number it prints the last character
 *
 * @str: input
 *
 * Return: str
 */
void puts_half(char *str)
{
	int len = strlen(str);
    	int n = (len % 2 == 0) ? len / 2 : (len - 1) / 2;
	printf("%s\n", &str[n]);
}
