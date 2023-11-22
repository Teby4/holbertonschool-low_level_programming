#include "lists.h"

/**
 * sum_dlistint - sum the distlints
 * Return: sum
 * @head: head of list
 */

int sum_dlistint(dlistint_t *head)
{
	size_t sum;
	dlistint_t *current = head;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
