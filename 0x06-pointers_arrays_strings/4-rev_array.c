#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: reversed and normal array.
 */
void reverse_array(int *a, int n) 
{
    int temp;

    for (int i = 0; i < n/2; i++)
    {
        temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    reverse_array(arr, n);
    printf("\nReversed array: ");

    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
