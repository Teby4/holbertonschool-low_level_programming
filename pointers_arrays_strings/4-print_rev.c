#include "main.h"
#include <stdio.h>

/**
 * print_rev -  print reverse
 * Return:
 * Description:
 * @s: string
 */

void print_rev(char *s)
{	
	char *j;
	
	j = s;

		while (*s <= '\0')
		{
		s++;
		}
		s--;
		while (s >= j)
		{
		_putchar(*s);
		s--;
		}
	_putchar('\n')
}
