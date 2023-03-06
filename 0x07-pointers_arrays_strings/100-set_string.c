#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * set_string -  sets the value of a pointer to a char.
 *
 * Return: Always 0.
 */
void set_string(char **s, char *to) 
{
    	size_t len = strlen(to);
    	char *new_s = (char*) malloc((len+1) * sizeof(char));
    	if (new_s == NULL) 
	{
        	printf("Error: memory allocation failed\n");
        	return;
    	}
    	strncpy(new_s, to, len+1);
    	*s = new_s;
}
