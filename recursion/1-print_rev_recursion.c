#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - reverse string
 *
 * @s: parametr
 *
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
