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
	int i;
	int n = strlen(str) / 2;

	for (i = 0; i < n; i++)
	{
		printf("%c", str[i + n]);
	}
	putchar('\n');
}
