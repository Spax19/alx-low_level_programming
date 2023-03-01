#include "main.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers.
 *
 * Return: swapped value.
 */
void swap_int(int* a, int* b) 
{
    int temp = *a; 
    *a = *b; 
    *b = temp; 
}

