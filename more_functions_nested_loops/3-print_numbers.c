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

	while (o <= 9)
	{
	_putchar(o + '0');
	o++;
	}
	_putchar('\n');

}
