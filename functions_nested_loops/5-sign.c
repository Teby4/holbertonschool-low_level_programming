#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
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
	return(-1);
	}
	else (n == 0);
	{
	_putchar(0);
	return(0);	
	}


}
