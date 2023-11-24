#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - check the code
 * @format: format
 *
 * Return: co
 */

void print_all(const char * const format, ...)
{
	va_list co;
	int i = 0;
	char *str;

	va_start(co, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(co, int));
				break;
			case 'i':
				printf("%d", va_arg(co, int));
				break;
			case 'f':
				printf("%f", va_arg(co, double));
				break;
			case 's':
				str = va_arg(co, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(co);
}
