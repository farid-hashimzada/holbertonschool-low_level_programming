#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenates two string
 * @s1: parametr
 * @s2: parametr
 *
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	char *buf;
	int i;

	if (s1 == NULL)
		size1 = 0;
	else
		size1 = strlen(s1);
	if (s2 == NULL)
		size2 = 0;
	else
		size2 = strlen(s2);
	buf = malloc(sizeof(char) * (size1 + size2) + 1);
	if (buf == NULL)
		return (NULL);
	for (i = 0; i < size1 + size2; i++)
	{
		if (i < size1)
			buf[i] = s1[i];
		else
			buf[i] = s2[i - size1];
	}
	return (buf);
}

