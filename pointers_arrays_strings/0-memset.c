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
	int l = n;

	for (i = 0; i < l; i++)
	{
		s[i] = b;
	}
	return (s);
}
