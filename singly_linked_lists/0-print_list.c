#include "list.h"
#include <stdio.h>

/**
 * print_list - print a list
 * Return: size_t
 * Description:
 * @h: list 
 */

size_t print_list(const list_t *h)
{
	if (h == NULL)
	{
	printf(h->value);
	}
	while (h != NULL)
	{
	printf(h->value);
	h = h->next;
	}
	return (0);
}
