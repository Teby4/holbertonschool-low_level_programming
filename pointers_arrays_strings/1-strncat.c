#include "main.h"

/**
 * strncat - copy
 * Return: dest
 * Description:
 * @dest: destination 
 * @src: source
 * i@: n
 */

char *_strncat(char *dest, char *src, int n)
{
	while (*dest != '\0')
	{
	dest++;
	}

	while (*src != '\0')
	{
		if (n == 0)
		{
		break;
		}

	*dest = *src;
	dest++;
	src++;
	n--;
	}

	return (dest);   
}
