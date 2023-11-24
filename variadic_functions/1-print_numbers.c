#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_numbers - sum the argument with separator
 * @separator: arg
 * @n: parametr
 *
 * Return: co
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list co;
	unsigned int i;
	int f;

	va_start(co, n);
	for (i = 0; i < n; i++)
	{
		f = va_arg(co, int);
		if (separator != NULL && i != 0)
			printf("%s%d", separator, f);
		else
			printf("%d", f);
	}
	va_end(co);
	printf("\n");
}
