#include "main.h"

/**
 * _strlen_recursion - len recursion
 * Return:
 * Description:
 * @s: string
 */

int _strlen_recursion(char *s)
{
	int len;

	if (*s != '\0')
	{
	len++;
	s++;
	_strlen_recursion(s);
	}

	return (len);
}
