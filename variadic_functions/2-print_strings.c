#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - print string
 * Return: string
 * Description:
 * @separator: separator
 * @n: string
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list(args);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(args, char*));

		if (separator != NULL && i < n -1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}
