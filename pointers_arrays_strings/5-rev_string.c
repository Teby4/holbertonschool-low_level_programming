#include <stdio.h>
#include "main.h"

/**
 * rev_string - string
 * Return:
 * Description:
 * @s: string
 */

void rev_string(char *s)
{
	char *j;
	char temp;

	j = s;

		while (*s != '\0')
		{
		s++;
		}
		s--;
		while (temp <= s)
		{
		temp = *j;
		*j = *s;
		*s = temp;
		j++;
		s--;

		}

	_putchar('\n');
}
