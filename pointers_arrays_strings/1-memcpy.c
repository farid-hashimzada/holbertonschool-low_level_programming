#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: parametr
 * @src: parametr
 * @n: parametr
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int f = n;

	for (i = 0; i < f; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
