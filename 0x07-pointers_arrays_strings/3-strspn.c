#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring.
 *
 * Return: s
 */

int _strspn(char *s, char *accept) 
{
    	int count = 0;
    	char *p = s;
    	while (*p != '\0' && strchr(accept, *p) != NULL) 
    	{
        	count++;
        	p++;
    	}
    	return count;
}
