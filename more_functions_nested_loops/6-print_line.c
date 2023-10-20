#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: Write a function that draws a straight line in the terminal.
 *
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	 _putchar('\n');
}
