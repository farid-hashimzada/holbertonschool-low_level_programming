#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a: Write a function that swaps the values of two integers.
 * @b: Write a function that swaps the values of two integers.
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
