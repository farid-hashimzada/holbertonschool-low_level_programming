#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: parametr
 * @accept: parametr
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;

		while (accept[b])
		{
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}

			b++;
		}

		a++;
	}

	return ('\0');
}
