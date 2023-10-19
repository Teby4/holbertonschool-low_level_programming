#include "main.h"
#include <stdio.h>

/**
 * *strncat - 
 * Return: dest
 * Description:
 * @dest: destination 
 * @src: source
 * i@: n
 */

char *_strncat(char *dest, char *src, int n)
{
	n = 0;
	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
		if (*src >= n)
		{
		break;
		}

	*dest = *src;
	dest++;
	src++;
	n++;
	}

	return (dest);   
}
