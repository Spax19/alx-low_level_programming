#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* 
* Return: 0
*/

int main(void)
{
        int a, b, c;
	int i;

        a = 972;
        b = -98;
        c = 0;

	i = largest_number(a, b, c);

        printf("%d is the largest number\n", i);

        return (0);
}
