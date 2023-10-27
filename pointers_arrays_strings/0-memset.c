#include "main.h"
#include <stdio.h>

/**
 * _memset - prints buffer in hexa
 * @s: variable
 * @b: variable
 * @n:variable
 * Return: 's'
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
