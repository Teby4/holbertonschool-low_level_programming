#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - print all
 * Return: numbers
 * Description:
 * @format: format
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;

	va_list args;

	va_start(args, *);

	while (format != NULL)
	{

	switch(format[i])
	{
	case c:
	printf("%d", va_arg(args, char));
	break;

	case i:

	break;

	case f:

	break;

	case s:

	break;
	}
	i++;
	}

	va_end(args);
	printf("\n");
}
