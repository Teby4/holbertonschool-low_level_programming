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
	while (*s1 == *s2)
	{
		if (*s1 == '\0' && *s2 == '\0')
		{
		break;
		}
	s1++;
	s2++;
	}

return (*s1 - *s2);
}
