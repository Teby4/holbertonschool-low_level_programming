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
			if (a * b > 9)
			{
				_putchar(a * b / 10 + '0');
				_putchar(a * b % 10 + '0');
			}
			else (a * b < 9)
			{
			_putchar(a * b + '0');
			}
			
		_putchar(',');
        	_putchar(' ');
		b++;
	
		}
	b = 0;
	}
	_putchar('\n');
}
