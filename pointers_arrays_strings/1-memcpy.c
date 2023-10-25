#include "main.h"

/**
 * _memcpy - cpy memory
 * Return: dest
 * Description:
 * @dest: destination
 * @src: source
 * @n: numero
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0;

	for (; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
