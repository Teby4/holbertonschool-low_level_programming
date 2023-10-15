#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - reproduce the abs function
 * Description: reproduce abs
 * @n: number given
 * Return: n
 */

int _abs(int n)
{
	if (n < 0)
	{
	n = -n;
	}
	return (n);

}
