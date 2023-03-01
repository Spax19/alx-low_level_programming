#include "main.h"
#include <stdio.h>

/**
 * _strlen - check the length of a string
 *
 * Return: len.
 */
int _strlen(char* s) 
{
    int len = 0;

    while (*s != '\0') {
        len++; 
        s++;
    }
    return len;
}

