#include <stdio.h>
/**
 * clear_bit - clear bit
 * @n: number.
 * @index: index.
 *
 * Return: 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
