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

	j = (char *)malloc(strlen(str) * sizeof(char));
		if (j == NULL)
		{
		return ('\0');
		}
	for (i = 0; i < strlen(str) + 1; i++)
	{
	j[i] = str[i];
	}

	return j;
}
