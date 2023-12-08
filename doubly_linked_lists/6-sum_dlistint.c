#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list.
 * @head: head of the list
 *
 * Return: Always EXIT_SUCCESS.
 */

int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;

	if (head != NULL)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
		return (sum);
	}
	return (0);
}
