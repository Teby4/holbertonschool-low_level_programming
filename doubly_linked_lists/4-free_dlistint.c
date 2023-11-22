#include "lists.h"

/**
 * free_dlistint - Write a function that adds a new node
 * at the end of a dlistint_t list.
 * Return: count
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
    dlistint_t *current;

	while (current != NULL)
	{
	next = current->next;

	current = head;
	head = head->next;
	free(current);
	}
}
