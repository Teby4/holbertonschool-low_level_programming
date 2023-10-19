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
	int j, n, i;

	j = 0;
	n = 0;
	i = 0;

	while (*s != '\0')
	{
		if (*s >= '0' && *s <= '9')
		{
		i = *s - '0';
		j = j * 10 + i
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
