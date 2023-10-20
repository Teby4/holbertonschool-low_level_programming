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
	int h;

	j = dest;

	while (*src != '\0')
	{
		if (n <= 0)
		{
		dest = '\0'
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
