#include "main.h"
#include <stdio.h>

/**
 * 
 *
 *
 *
 */

void print_diagonal(int n)
{
	int j p;

	for (j = 0; j < n; j++)
	{
		for (p = 0; p < j; j++)
		{
		_putchar(' ');
		}

	_putchar(92);
	_putchar('\n')
	
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
