#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * Return:
 * @name: name
 * @f: function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
	f(name);
	}
}
