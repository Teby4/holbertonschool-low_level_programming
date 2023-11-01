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
	int i;

	j = (char *)malloc(str * sizeof(char))
		if (j == NULL)
		{
		return ('\0');
		}
	for (i = 0; i < str; i++)
	{
	j = str;
	j++;
	s++;
	}
	return j;
}
