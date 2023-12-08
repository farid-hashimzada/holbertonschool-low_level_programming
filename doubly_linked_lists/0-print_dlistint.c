#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head of list
 *
 * Return: s.
 */


size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *data;
	size_t s = 0;

	for (data = h; data != NULL; data = data->next)
	{
		printf("%d\n", data->n);
		s++;
	}
	return (s);
}
