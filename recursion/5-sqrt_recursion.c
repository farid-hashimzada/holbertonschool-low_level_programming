#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - sqrt recursion
 * _sqrt - function
 * @guess: parametr
 * @n: parametr
 * @n: parametr
 *
 * Return: Always 0.
 */

int _sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (_sqrt(n, guess + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt(n, 1));
}
