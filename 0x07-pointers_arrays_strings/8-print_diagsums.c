#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix of integers.
 *
 * Return: Always 0.
 */
public void print_diagsums(int *a, int size) 
{

    	int sum1 = 0, sum2 = 0, i;
    	for (i = 0; i < size; ++i) 
	{
        	sum1 += *(a+i*size+i); 
        	sum2 += *(a+(i+1)*size-(i+1)); 
    	}
    	printf("Diagonal 1 sum: %d\n", sum1);
    	printf("Diagonal 2 sum: %d\n", sum2);
}
