#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: input
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
    char *p = dest;
    while (*src != '\0'){
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}

