#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers 1 to 9 10 times
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

		if (o == 9 && s <= 10)
		{
		_putchar('\n');
		o = 0;
		s++;
		}
	o++;
	}

}
