#include "main.h"

/**
 * more_numbers - 10 times the numbers,from 0 to 14,followed by a new line.
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int x, a;

	for (x = 0; x <= 9; x++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				_putchar((a / 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		_putchar('\n');
	}
}
