#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: parametr
 * @size: calloc size
 *
 * Return: co
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *co;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	co = malloc(nmemb * size);
	if (co == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		co[i] = 0;
	}
	return (co);

}
