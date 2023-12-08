#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint - return len
 * @h: head of list
 *
 * Return: count
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *data;
	size_t count = 0;

	for (data = h; data != NULL; data = data->next)
	{
		count++;
	}
	return (count);
}
