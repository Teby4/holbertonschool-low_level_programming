#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers 1 to 9
 * Return:
 * Description:
 */

void print_most_numbers(void)
{
	int o;

	o = 0;

	while(o <= 9)
	{
		if (o != 2 && o != 4)
		{
		_putchar(o + '0');
		}
		o++;
	}
	_putchar('\n');

}
