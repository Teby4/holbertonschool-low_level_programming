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
	size_t count = 0;

	while (h != null)
	{
		if (h->str == nul)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("%[lu] %s\n",h->len, h->str )
		}

		count++;
		h = h->next;
	}

	return(count);
}
