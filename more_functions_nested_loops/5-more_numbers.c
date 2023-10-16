#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print numbers 1 to 9
 * Return:
 * Description:
 */

void more_numbers(void)
{
	int o;
	int s;

	o = 0;
	s = 0;

	while (o <= 9)
	{
	_putchar(o + '0');

		while (o == 9)
		{
		_putchar('\n');
		o = 0;
		}
	o++;
	}

}
