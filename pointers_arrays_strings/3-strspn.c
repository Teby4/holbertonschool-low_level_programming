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
	int stop = 0;
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
		if (*s == *accept)
		{
		stop++;
		break;
		}
		accept++;
		}
	if (stop > 0)
	{
	break;
	}
	len++;
	s++;
	}
	return (len);
}
