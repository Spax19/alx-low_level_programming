#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
 
 char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        *(s+i) = b;
    }
    return s;
}

int main() {
    char buffer[50];
    _memset(buffer, 'A', 50);
    printf("buffer after memset: %s\n", buffer);
    return 0;
}
