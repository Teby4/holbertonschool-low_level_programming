#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy the string
 * Return:
 * Description:
 * @dest: destination
 * @src: source
 */

char *_strcpy(char *dest, char *src)
{
	while (*src != '\0')
	{
	src++;
	}
	for (*dest = 0; *dest < *src; *dest++)
	{
	_putchar(*dest);
	}

	_putchar('\n');
	return (dest);
}
