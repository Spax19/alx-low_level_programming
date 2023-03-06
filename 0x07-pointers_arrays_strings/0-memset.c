#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte.
 *
 * @n: number of bytes to be filled with the constant byte.
 *
 * @s:  pointer to the memory area
 *
 * Return: Nothing.
 */
 
 char *_memset(char *s, char b, unsigned int n) 
{
	int i;
    	for (i = 0; i < n; i++) 
    	{
        	*(s+i) = b;
    	}
    	return s;
}
