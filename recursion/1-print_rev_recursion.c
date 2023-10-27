#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * Return:
 * Description:
 * @s: string
 */

void _print_rev_recursion(char *s)
{
	char *j;
	char *p;

	p = j;
	j = s;

	if (s == j)
	{
	break;
	}
	if (*j == '\0')
	{
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
	}
	if (*j != '\0')
	{
	j++;
	s++;
	_print_rev_recursion(s);
	}
}
