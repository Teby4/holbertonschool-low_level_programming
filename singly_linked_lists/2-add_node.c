#include "lists.h"

/**
 * add_node - add node to list
 * Return:
 * @head: head of the list
 * @str: string
 */

list_t *add_node(list_t **head, const char *str)
{
	size_t i = 0, length = 0;

	list_t *new_node;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[i] != NULL)
	{
	i++;
	lenght++;
	}
	
	new_node= (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
	return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}
	new_node->len = length;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
