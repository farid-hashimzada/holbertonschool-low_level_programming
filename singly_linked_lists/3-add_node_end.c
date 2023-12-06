#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_list - function that adds a new node at the end of a list_t list.
 * @head: head of list
 * @str: string
 *
 * Return: data
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *data;
	list_t *newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	newNode->next = NULL;
	newNode->len = strlen(str);
	newNode->str = strdup(str);

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	data = *head;

	while (data->next != NULL)
	{
		data = data->next;
	}
	data->next = newNode;
	return (data);

}
