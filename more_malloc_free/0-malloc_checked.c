#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory using malloc.
 * @b: parametr
 *
 * Return: co
 */

void *malloc_checked(unsigned int b)
{
	char *co;

	co = malloc(b);
	if (co == NULL)
	{
		exit(98);
	}
	return (co);

}
