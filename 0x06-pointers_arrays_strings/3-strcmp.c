#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1 & s2: inputs
 *
 * Return: s1 and s2
 */
int _strcmp(const char* s1, const char* s2) 
{
    while (*s1 != '\0' || *s2 != '\0') 
    {
        if (*s1 != *s2) 
	{
            return (*s1 < *s2) ? -1 : 1;
        }
        s1++;
        s2++;
    }
    return 0;
}
