#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - print every other character
 *
 * @str: number print
 *
 * Return: Always 0.
 */

void puts2(char *str)
{
	size_t i;

	if (strlen(str) > 0)
	{
		for (i = 0; i < strlen(str); i += 2)
		{
			printf("%c", str[i]);
		}
	}
	putchar('\n');
}
