#include "main.h"

/**
 * _strlen_recursion - len recursion
 * Return: lenght
 * Description:
 * @s: string
 */

int _strlen_recursion(char *s)
{
	char *j;
	
	j = s;

	if (*s != '\0')
	{
	s++;
	return (_strlen_recursion((s) + 1));
	}
}
