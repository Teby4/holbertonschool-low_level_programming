#include "main.h"

/**
 * string_toupper - change to uppercase
 * Return: string uppercase
 * Description:
 *
 */

char *string_toupper(char *p)
{
	while (*p != '\0')
	{
		if (*p >= 'a' && p <= 'z')
		{
		p = p - 32;
		}
	p++;
	}

	return (p);
}
