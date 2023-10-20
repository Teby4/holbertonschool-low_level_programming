#include "main.h"

/**
 * _strncpy - copy
 * Return: dest
 * Description:
 * @dest: destination
 * @src: source
 * @n: number to stop at
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *j;

	j = dest
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
	src++;
	dest++;
	n--;
	}
	dest = j;
	return (dest);
}
