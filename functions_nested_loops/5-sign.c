#include "main.h"
#include <stdio.h>

/**
 * print_sign - print the sign
 * Description: t5
 * Return:
 */

int print_sign(int n)
{
	if (n >= 1)
	{
	_putchar(43);
	return (1);
	}
	else if (n <= -1)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}


}
