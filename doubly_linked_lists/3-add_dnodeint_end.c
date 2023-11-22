#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a new node 
 * at the end of a dlistint_t list.
 * Return: count
 * @head: head
 * @n: n
 */

 dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
 {
	dlistint_t *last = *head;
	dlistint_t *new_node;

	if (n == '\0')
	{
	return (NULL);
	}

	new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
	return (NULL); }

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node; }

	else
	{
	while (last->next != NULL)
	{
		last = last->next; }

	last->next = new_node; }

	return (new_node);
 }