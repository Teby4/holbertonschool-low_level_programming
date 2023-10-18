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
	temp = 0;

		while (*s != '\0')
		{
		s++;
		}
		s--;
		while (j < s)
		{
		temp = *j;
		*j = *s;
		*s = temp;
		j++;
		s--;

		}

	_putchar('\n');
}
