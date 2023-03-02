#include <stdio.h>

/**
 * _strncpy - copies a string
 *
 * @src: input
 *
 * Return: dest
 */
char* _strncpy(char* dest, const char* src, int n) 
{
    char* p = dest;
    int i = 0;
    while (*src != '\0' && i < n) 
    {
        *p = *src;
        p++;
        src++;
        i++;
    }
    while (i < n) 
    {
        *p = '\0';
        p++;
        i++;
    }
    return dest;
}
