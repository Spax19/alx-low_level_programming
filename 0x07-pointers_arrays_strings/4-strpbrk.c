#include <stdio.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes.
 *
 * Return: s
 */

char *_strpbrk(char *s, char *accept) 
{

    	while (*s != '\0') 
	{
        	char *a = accept;
        	while (*a != '\0') 
		{
            		if (*s == *a) 
			{
                		return s;
            		}
            		a++;
        	}
        	s++;
    	}
    	return NULL;
}

