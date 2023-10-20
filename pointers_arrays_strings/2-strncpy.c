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

	j = dest;

	while (*src != '\0')
	{
		while (n <= 0)
		{
		dest = '\0';
		dest++;
		}

	*dest = *src;
	dest++;
	src++;
	n--;
	}

	dest = j;
	return (dest);
}
