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
		while (*s <= '\0')
		{
		_putchar(*s);
		s--;
		}

	_putchar ('\n');
}
