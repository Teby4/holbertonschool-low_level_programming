#include "main.h"
#include <stdio.h>

/**
 * times_table - print the times table
 * Return: ...
 *
 *
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		while (b < 10)
		{
		_putchar(a * b + '0');
		b++;
		}
	
	_putchar(',');
	_putchar(' ');
	}
	_putchar('\n');
}
