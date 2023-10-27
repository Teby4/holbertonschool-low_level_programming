#include "main.h"

/**
 * _strpbrk - locates first occurance
 * Return:
 * Description:
 * @s: string
 * @accept: string
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	j = 0;

	while (*s != '\0')
	{
	if (*s == *accept)
	{
	j = 1;
	return (accept);
	}
	s++;
	}

	if (j == 0)
	{
	return ('\0');
	}
}
