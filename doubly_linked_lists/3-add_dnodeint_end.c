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
    size_t lent = 0;
	list_t *last = *head;
	list_t *new_node;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[lent] != '\0')
	{
	lent++; }

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
	return (NULL); }

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL); }

	new_node->len = lent;
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