#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers 1 to 9
 * Return:
 * Description:
 */

void print_numbers(void)
{
	int o;

	o = 0;

	for (o <= 9)
	{
		if (o != 2 && o != 4)
		{
		_putchar(o + '0');
		}
	}
	_putchar('\n');

}
