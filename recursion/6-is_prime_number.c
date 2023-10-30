#include "main.h"
#include <stdio.h>

int prime(int n, int i, int limit);

/**
 * is_prime_number - Check if a number is prime.
 * @n: The number to check.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int is_prime_number(int n)
{
	return (prime(n, 2, n / 2));
}

/**
 * prime - Recursive function to check for primality.
 * @n: The number to check.
 * @i: The current divisor being tested.
 * @limit: The upper limit for testing divisors.
 *
 * Return: 1 if prime, 0 otherwise.
 */

int prime(int n, int i, int limit)
{
	if (n < 0 || n == 1)
		return (0);
	if (n % i == 0 && i <= limit)
		return (0);
	if (n % i != 0 && i <= limit)
		return (prime(n, i + 1, limit));
	return (1);
}
