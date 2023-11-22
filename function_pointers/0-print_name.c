#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - uppercase the string
 * @name: argument name
 * @f: function
 *
 * Return: Always 0.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
