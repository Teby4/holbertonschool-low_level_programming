#include "main.h"

/**
 * string_toupper - change to uppercase
 * Return: string uppercase
 * Description:
 * @p: string
 */

char *string_toupper(char *p)
{
	char *r;

	r = p;

	while (*p != '\0')
	{
		if (*p >= 'a' && *p <= 'z')
		{
		*p = *p - 32;
		}
	p++;
	}
	p = r;
	return (p);
}
