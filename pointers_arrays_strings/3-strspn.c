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
	char *j=

	j = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
		if (*s == *accept)
		{
		stop = 1;
		break;
		}
		accept++;
		}
	if (!stop)
	{
	break;
	}
	len++;
	s++;
	accept = j;
	}
	return (len);
}
