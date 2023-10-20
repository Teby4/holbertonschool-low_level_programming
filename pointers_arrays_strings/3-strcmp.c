#include "main.h"

/**
 * _strcmp - compares two strings
 * Return: s2
 * Description:
 * @s1: string 1
 * @s2: string 2
 */

int _strcmp(char *s1, char *s2)
{
	int j, u;

	j = 0;
	u = 0;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if(*s1 == *s2)
		{
		u++;
		}
	s1++;
	s2++;
	j++;
	}
	if (u == j)
	{
	return (1);
	}
	else if (u == 0)
	{
	return (0);
	}
	else
	{
	return (-1);
	}
}
