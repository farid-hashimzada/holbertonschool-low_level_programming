#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strdup - memmory
 * @str: parametr
 *
 * Return: co.
 */

char *_strdup(char *str)
{
	int size;
	char *co;
	int i;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	co = malloc(sizeof(char) * size + 1);
	if (co == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		co[i] = str[i];
	}
	return (co);
}
