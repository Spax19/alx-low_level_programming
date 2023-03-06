#include <stdio.h>

/**
 * _memcpy - copies memory area
 *
 * @src:  memory area has been correctly copied from
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, int n) 
{
	int i;
    	for (i = 0; i < n; i++) 
	{
        	*(dest+i) = *(src+i);
    	}
    	return dest;
}
