#include "lists.h"

/**
 * free_dlistint - Write a function that adds a new node
 * at the end of a dlistint_t list.
 * Return: count
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
	next = current->next;

	free(current->str);
	free(current);
	current = next;
	}
}
