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

	while (*s != '\0')
	{
	if (*s == *accept)
	{
	return (accept);
	}
	s++;
	}
	return ('\0');
}
