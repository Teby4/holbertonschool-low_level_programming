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
	int j = 0;

	while (*s != '\0')
	{
		if (*s == 'c')
		{
		j + 1;
		break;
		}
	s++;
	}
	if (j == 0)
	{
	return ('\0');
	}
	else
	{
	return (s);
	}
}
