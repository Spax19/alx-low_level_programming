#include <stdio.h>

/**
 * atoi - converts string into an interger
 *
 * @s: input
 *
 * Return: Always 0.
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;

    while (*s != '\0')
    {
        if (*s == '-')
	{
            sign = -1;
        } else if (*s == '+')
	{
            sign = 1;
        } else if (*s >= '0' && *s <= '9') 
	{
            result = result * 10 + (*s - '0');
        } else 
	{
            break;
        }
        s++;
    }

    return sign * result;
}
