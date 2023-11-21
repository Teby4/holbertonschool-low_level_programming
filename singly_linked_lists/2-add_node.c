#include "list.h"

/**
 * add_node - add node to list
 * Return:
 * @head: head of the list
 * @str: string
 */

list_t *add_node(list_t **head, const char *str)
{
	if (str == NULL)
	{
	return (NULL);
	}
	
	list_t *new_node= (list_t *)malloc(sizeof(list_t));

	if (new_node == null)
	{
	return (NULL);
	}

	newnode->str = strdup(str);

	if (new_node->str == NULL)
	{
	free(new_node);
	return (NULL);
	}

	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
