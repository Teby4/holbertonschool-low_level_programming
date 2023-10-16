#include "main.h"
#include <stdio.h>

/**
 * _isupper - check for uppercase
 * Return: 1 or 0
 * Description:
 * @c: letter input
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
