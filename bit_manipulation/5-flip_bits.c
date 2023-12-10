#include <stdio.h>
/**
 * flip_bits - flip bits
 * @n: number.
 * @m: number.
 *
 * Return: r
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int k = 0, j = 0, r = 0;

	while (n || m)
	{
		k = n & 1;
		j = m & 1;

		if (k != j)
			r += 1;
		n >>= 1;
		m >>= 1;
	}

	return (r);
}
