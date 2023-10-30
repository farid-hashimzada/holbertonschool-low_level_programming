#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - sqrt recursion
 *
 * @n: parametr
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int i;

		for (i = 1; i <= n / 2; i++)
		{
			if (i * i == n)
			{
				return (i);
			}
		}
		return (-1);
	}
}
