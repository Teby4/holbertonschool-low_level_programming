#include "main.h"
#include <stdio.h>

/**
 * _strlen - return the lenght of a string
 * Return: lengt of a string
 * Description:
 * @s: string
 */


int _strlen(char *s)
{
	int b;
	
	b = 0;

		while(*s != '\0')
		{
		b++;
		}

	return (b);

}
