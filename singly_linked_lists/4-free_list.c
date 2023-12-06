#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - Write a function that frees a list_t list.
 * @head: head of the list
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
	list_t *data = head;
	list_t *aux;

	while (data != NULL)
	{
		aux = data;
		data = data->next;
		free(aux->str);
		free(aux);
	}
}
