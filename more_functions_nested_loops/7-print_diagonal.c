#include "main.h"

/**
 * print_diagonal -Write a function that draws a diagonal line on the terminal.
 *@n: Write a function that draws a diagonal line on the terminal.
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('\\');
	}
	_putchar('\n');
}
