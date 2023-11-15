#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - prints buffer in hexa
 * @size: the address of memory to print
 * @c: the size of the memory to print
 *
 * Return: buf.
 */

char *create_array(unsigned int size, char c)
{
	char *co = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (co == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		co[i] = c;
	}
	co[i] = '\0';
	return (co);
}
