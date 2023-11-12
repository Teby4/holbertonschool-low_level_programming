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
	char *str;

	va_list(args);

	va_start(args, format);

	while (format && format[i])
	{

	switch (format[i])
	{
	case 'c':
	printf("%c", va_arg(args, int));
	break;

	case 'i':
	printf("%d", va_arg(args, int));
	break;

	case 'f':
	printf("%f", va_arg(args, double));
	break;

	case 's':
	str = va_arg(args, char*);
	if (str == NULL)
	{
	str = "(nil)";
	}
	printf("%s", str);
	break;
	}
	if (format[i + 0] != 0 && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
	{
	printf(", ");
	}

	i++;
	}

	va_end(args);
	printf("\n");
}
