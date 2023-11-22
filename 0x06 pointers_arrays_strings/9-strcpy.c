#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy the string
 * Return: dest
 * Description:
 * @dest: destination
 * @src: source
 */

char *_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while (*src != '\0')
	{
	*dest = *src;
	src++;
	dest++;
	}
	*dest = '\0';

	return (temp);
}
