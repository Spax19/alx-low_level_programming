#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @src: input
 *
 * Return: dest
 */
char* _strncat(char* dest, const char* src, int n, int i) 
{
    char* p = dest;
    while (*p != '\0') 
    {
        p++;
    }
    i = 0;
    while (*src != '\0' && i < n) 
    {
        *p = *src;
        p++;
        src++;
        i++;
    }
    *p = '\0';
    return dest;
}
