#include <stdio.h>
#include "main.h"

/**
 * puts2 - puts2
 * Return:
 * Description:
 * @str: string
 */



void puts2(char *str)
{
	char j;

	j = 0;

	while (*str != '\0')
	{
		if (j % 2 == 0)
		{
		_putchar(*str);
		}
	j++;
	str++;
	}

	_putchar('\n');
}
