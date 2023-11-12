#include "main.h"
#include <stdio.h>

/**
 * print_name - print name
 * Return:
 * @name: name
 * @f: function
 */

void print_function(char *name) 
{
	printf("Hello, %s!\n", name);
}

void print_name(char *name, void (*f)(char *))
{
f(name)
}

