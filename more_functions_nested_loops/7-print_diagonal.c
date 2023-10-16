#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print a diagonal 
 * Return: diagonal
 * Description:
 * @n: numero
 */

void print_diagonal(int n)
{
	int j, p;

	for (j = 0; j < n; j++)
	{
		for (p = 0; p < j; p++)
		{
		_putchar(' ');
		}

	_putchar(92);
	_putchar('\n');

	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
