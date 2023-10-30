#include "main.h"
#include <stdio.h>

/**
 * _sqrt - function
 * @n: parametr
 * @guess: parametr
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
/**
 * _sqrt_recursion - sqrt recursion
 * @n: parametr
 * Return: int
 */
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
