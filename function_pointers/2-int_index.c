#include <stdio.h>

/**
 * int_index - check integer number
 * @array: array's element
 * @size: element size
 * @cmp:  pointer to the function to be used to compare values
 *
 * Return: Always 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i <= size; i++)
	{
	if (cmp(array[i]))
		return (i);
	}
	return (-1);
}
