#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: pointer string
 * @s2: pointer string
 * @n: parametr
 *
 * Return: arr
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int i;
	int index = 0;
	int length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	length = (n < strlen(s2)) ? n : strlen(s2);

	arr = (char *)malloc(strlen(s1) + length + 1);

	if (arr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		arr[i] = s1[i];
		index++;
	}

	for (i = 0; i < length; i++)
	{
		arr[index] = s2[i];
		index++;
	}


	arr[index] = '\0';
	return (arr);
}
