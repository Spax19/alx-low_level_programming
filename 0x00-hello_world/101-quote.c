#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point
 * Return: Always 1 (Success)
 */

int main(void) 
{
  const char message[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

  const int length = sizeof(message) - 1;

  const ssize_t bytes_written = write(STDERR_FILENO, message, length);

  return (bytes_written == length) ? 1 : 0;
}
