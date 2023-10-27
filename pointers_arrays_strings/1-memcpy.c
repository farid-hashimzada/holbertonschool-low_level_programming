#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int f = n;

	for (i = 0; i < f; i++)
	{
		src[i] = dest[i];
	}
	return (dest);
}
