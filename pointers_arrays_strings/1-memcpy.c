#include "main.h"

/**
 * _memcpy - cpy memory
 * Return: dest
 * Description:
 * @dest:
 * @src:
 * @n:
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for(; j < n; j++)
	{
		src[j] = dest[j];
	}

	return (dest);
}
