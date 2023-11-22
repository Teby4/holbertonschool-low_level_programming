#include "lists.h"

/**
 * free_list - free the list
 * Return:
 * @head: head of list_t
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
	next = current->next;

	free(current->str);
	free(current);
	current = next;

	}
}