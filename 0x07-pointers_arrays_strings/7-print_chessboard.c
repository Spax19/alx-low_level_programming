#include <stdio.h>
#include <iostream>

/**
 * print_chessboard - prints out chessboard
 *
 * Return: 0.
 */

void print_chessboard(char (*a)[8]) 
{

    	for (int i = 0; i < 8; ++i) 
	{
        	for (int j = 0; j < 8; ++j) 
		{
            		std::cout << a[i][j] << ' ';
        	}	
        	std::cout << std::endl;
    	}
}
