#include "main.h"
#include <stdio.h>

/**
 * _puts - 
 * Return:
 * Description:
 * @str: string
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str);
	str++;
	}
	_putchar('\n');
}
