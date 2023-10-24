#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - write code as half
 *
 * @str: write code as half
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i = 0, j;
	char *s = str;

	while (*str != '\0')
	{
		str++;
		i++;
	}
	for (j = (i - 1) / 2 + 1 ; j < i ; j++)
	{
		putchar(s[j]);
	}
	putchar('\n');
}
