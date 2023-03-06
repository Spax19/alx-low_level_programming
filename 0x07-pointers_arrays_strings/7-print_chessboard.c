#include <stdio.h>

/**
 * print_chessboard - prints out chessboard
 *
 * Return: 0.
 */

void print_chessboard(char (*a)[8]) 
{
	int i;
    	for (i = 0; i < 8; ++i) 
	{
		int j;
        	for (j = 0; j < 8; ++j) 
		{
            		std::cout << a[i][j] << ' ';
        	}	
        	std::cout << std::endl;
    	}
}
