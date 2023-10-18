#include "main.h"
#include <stdio.h>

/**
 * puts_half - print half a string
 * Return:
 * Description:
 * @str: string
 */


void puts_half(char *str)
{
	int j;
	int cont;
	char *ero;

	ero = str;

	cont = 0;
	while (*str != '\0')
	{
	str++;
	cont++;
	}
	if (cont % 2 != 0)
	{
	cont++;
	}

	j = cont / 2;
	str = ero;
	while (str[j] != '\0')
	{
	_putchar(str[j]);
	j++;
	}

	_putchar('\n');
}
