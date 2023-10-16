#include "main.h"
#include <stdio.h>

/**
 * print_line - print a line
 * Return:
 * Description:
 * @n: number given
 */

void print_line(int n)
{
	int s;

	for (s = 0; s > n; s++)
	{
		if (n > 0)
		{
		_putchar('_');
		}

	}
	_putchar('\n');

}
