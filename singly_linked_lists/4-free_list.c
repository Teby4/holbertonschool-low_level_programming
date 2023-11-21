#include "lists.h"

/**
 * free_list - free the list
 * Return: 
 * @head:
 */

void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
	next = current->next;

	free (current->str);
	free(current);
	current = next;

	}
}
