#include "main.h"
#include <stdio.h>

/**
 * factorial - find number factorial
 *
 * @n: parametr
 *
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1 || n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
