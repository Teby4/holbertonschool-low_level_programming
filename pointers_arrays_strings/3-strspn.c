#include "main.h"

/**
 * _strspn - return number of bytes
 * Return: len
 * Description:
 * @s: string
 * @accept: acept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s != '\0')
	{
		if (*accept == '\0')
		{
		break;
		}
		if (*s == *accept)
		{
		break;
		}
	s++;
	accept++;
	len++;
	}

	return (len);
}
