#include "main.h"
#include <stdio.h>

/**
 * print_name - print name
 * Return:
 * @name: name
 * @f: function
 */

void prname(char *name) 
{
	printf("%s!\n", name);
}

void print_name(char *name, void (*f)(char *))
{
f(prname);
}

