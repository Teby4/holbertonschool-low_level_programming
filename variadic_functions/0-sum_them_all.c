#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum them all
 * Return: sum
 * Description:
 * @n: number
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
	return (0);
	}

	va_list(args);
	va_start(args, n);

	for(i = 0; i < n; i++)
	{
	sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);

}
