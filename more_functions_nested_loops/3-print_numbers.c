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

	for (o >= 0; o <= 9; o++)
	{
	_putchar(o);
	}
	if (o == 9)
	{
	_putchar('\n');
	}

}