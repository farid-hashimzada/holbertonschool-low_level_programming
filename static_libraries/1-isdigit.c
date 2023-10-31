#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 *@c: Write a function that checks for a digit (0 through 9).
 * Return: Always 0.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
