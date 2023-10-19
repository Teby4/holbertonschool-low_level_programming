#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copy the string
 * Return: j
 * Description:
 * @s: source
 */

int _atoi(char *s)
{
	int j, n;

	j = 0;
	n = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
		j = j * 10 + *s - '0';
		}

		else if (*s == '-')
		{
		n++;
		}
	s++;
	}

	if (n % 2 != 0)
                {
                j = -j;
                }

	return (j);
}
