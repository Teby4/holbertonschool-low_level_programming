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
		if (n == 0)
		{
		break;
		}
	*dest = *src;
	dest++;
	src++;
	n--;
	}

	while (n > 0 && *dest != '\0')
		{
		*dest = '\0';
		dest++;
		n--;
		}

	dest = j;
	return (dest);
}
