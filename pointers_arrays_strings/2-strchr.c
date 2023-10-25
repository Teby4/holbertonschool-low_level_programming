#include "main.h"

/**
 * _strchr - AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
 * Return: pointer or null
 * Description:
 * @s: source
 * @c: character
 */

char *_strchr(char *s, char c)
{
	c = 0;

	while (*s != '\0')
	{
		if (*s == 'c')
		{
		c = *s;
		break;
		}
	s++;
	}
	if (c == 0)
	{
	return ('\0');
	}
	else
	{
	return (c);
	}
}
