#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - linear search algorithm
 * @array: firt element of the array
 * @size: array size
 * @value: value 
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		
	}
	return (-1);
}
