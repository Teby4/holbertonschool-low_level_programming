#include "main.h"

/**
 * _strncat - copy
 * Return: dest
 * Description:
 * @dest: destination
 * @src: source
 * @n: number to stop at
 */

char *_strncat(char *dest, char *src, int n)
{
	char *j;

	j = dest;

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
	dest = j;

	return (dest);
}
