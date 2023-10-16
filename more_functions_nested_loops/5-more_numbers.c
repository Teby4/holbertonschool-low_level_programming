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

	while (o < 10)
	{
		for (s = 0; s <= 14; s++)
		{
			if (s >= 10 && s <= 14)
			{
			_putchar(s / 10 + '0');
			}

		_putchar(s % 10 + '0');
		}
	_putchar('\n');
	o++;
	}

}
