#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list.
 * @head: start node
 * @n: count
 *
 * Return: node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node = malloc(sizeof(dlistint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		node->prev = NULL;
		node->next = NULL;
	}
	else
	{
		node->next = *head;
		node->prev = NULL;
		(*head)->prev = node;
	}
	*head = node;

	return (node);
}
