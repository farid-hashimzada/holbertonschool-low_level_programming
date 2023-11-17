#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: min number
 * @max: max number
 *
 * Return: co
 */

int *array_range(int min, int max)
{
	int *co;
	int i;

	if (min > max)
		return (NULL);
	co = malloc(sizeof(int) * (max - min + 1));
	if (co == NULL)
		return (NULL);
	for (i = 0; i + min <= max; i++)
	{
		co[i] = min + i;
	}
	return (co);
}
