#include "lists.h"

/**
 * delete_dnodeint_at_index - delete nodes till index
 * Return 1 if succed
 * @head: head of the nodes
 * @index: number to delete
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head
	int i;

	if (!head)
	{
		return (-1);
	}

	if (head)
	{
		for (i = 0; i < index; i++)
		{
			current = current->next;
		}
		if (index)
		{
			return (-1)
		}

		if (!index && current_node)
		{
			if (current_node->next)
				current_node->next->prev = current_node->prev;

			if (current_node->prev)
				current_node->prev->next = current_node->next;
			else
				*head = current_node->next;

			free(current_node);
			return (1);
		}
	}
	return (-1);
}