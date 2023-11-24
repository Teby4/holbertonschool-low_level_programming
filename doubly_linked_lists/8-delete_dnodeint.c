#include "lists.h"

/**
 * delete_dnodeint_at_index - delete nodes till index
 * Return: 1 if succed
 * @head: head of the nodes
 * @index: number to delete
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i;

	if (!head || !(*head))
	{
		return (-1);
	}

	for (i = 0; i < index && current; i++)
	{
		current = current->next;
	}

	if (i < index || !current)
	{
		return (-1);
	}

	if (current->next)
	{
		current->next->prev = current->prev;
	}

	if (current->prev)
	{
		current->prev->next = current->next;
	}
	else
	{
		*head = current->next;
	}

	free(current);
	return (1);
}
