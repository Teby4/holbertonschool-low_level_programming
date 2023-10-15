#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 */

int print_sign(int n);
{
	if (n >= 1)
	{
	return (1);
	_putchar("+");
	}
	else if (n <= -1)
	{
	return(-1);
	_putchar("-");
	}
	else
	{
	return(0);	
	_putchar("0");
	}


	}
