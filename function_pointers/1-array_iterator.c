#include <stdio.h>

/**
 * array_iterator - array \n line iterate
 * @array: my array
 * @size: array size
 * @action: array action
 *
 * Return: Always 0.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL || action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
