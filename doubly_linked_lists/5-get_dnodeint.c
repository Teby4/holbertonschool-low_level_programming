#include "lists.h"

/**
 * get_dnodeint_at_index - get index
 * Return: count
 * @head: head
 * @index: index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    while(head && index != NULL)
    {
        head = head->next;
        index--;
    }
    if (head && index == 0)
    {
		return (head);
    }
	return (NULL);
}
