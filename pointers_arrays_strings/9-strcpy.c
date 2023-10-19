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
	*dest = *src;
	_putchar(*dest);
	_putchar('\n')
	src++;
	}
	return (0);
}
