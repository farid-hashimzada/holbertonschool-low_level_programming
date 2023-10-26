#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - concatenates two string
 *
 * @dest: parametr
 * @src: parametr
 * @n: integer
 *
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		if (j == n)
		{
			break;
		}

		dest[i] = src[i];
		i++;
		j++;
	}

	return (dest);
}
