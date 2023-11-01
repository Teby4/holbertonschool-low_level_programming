#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -
 * Return: pointer to new string
 * Description:
 * @str: string
 */

char *_strdup(char *str)
{
	char *j;

	j = (char *)malloc(sizeof(char));
		if (j == NULL)
		{
		return ('\0');
		}
	while(*j < *str)
	{
	j = str;
	j++;
	s++;
	}
	return j;
}
