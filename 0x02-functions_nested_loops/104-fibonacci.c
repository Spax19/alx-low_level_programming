#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int Main(void)
    {
        int a = 1;
        int b = 2;
        int count = 0;
        int maxCount = 98;

        Console.Write($"{a}, {b}");
        count += 2;

        while (count < maxCount)
        {
            int c = a + b;
            a = b;
            b = c;
            count++;
            Console.Write($", {c}");
        }

        Console.WriteLine();
    }

