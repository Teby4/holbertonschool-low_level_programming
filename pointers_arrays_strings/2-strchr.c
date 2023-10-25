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
	while (*s != '\0')
	{
		if (*s == c)
		{
		return (s);
		}
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	else
	{
	return ('\0');
	}
}
