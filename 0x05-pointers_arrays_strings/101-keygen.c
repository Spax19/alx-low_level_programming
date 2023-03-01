#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 8

/**
 * password - generates random strong passwords
 *
 * Return: 0.
 */

int main(void) 
{
    char password[PASSWORD_LENGTH + 1]; 
    int i;
    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++) 
    {
        password[i] = rand() % 2 ? 'A' + rand() % 26 : 'a' + rand() % 26;

        if (rand() % 2) 
	{
            password[i] = '0' + rand() % 10;
        }
    }
    password[PASSWORD_LENGTH] = '\0';
    printf("%s\n", password);
    return 0;
}

