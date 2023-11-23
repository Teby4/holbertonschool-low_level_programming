#include "lists.h"

/**
 * insert_dnodeint_at_index - insert_dnodeint_at_index
 * Return: dlistint
 * @h: h
 * @idx: idx
 * @n: n
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i = 0;

	dlistint_t *new_node, *current;

	if (h == NULL)
	{
		return (NULL); }

	if (idx == 0)
	{
		return (add_dnodeint(h, n)); }
	current = *h;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next; }

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL); }

	if (current == NULL)
	{
		free(new_node);
		return (NULL); }

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;

	return (new_node);
}
