#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _strdup - copy a string
 * Return: pointer to new string
 * Description:
 * @str: string
 */

char *_strdup(char *str)
{
	char *j;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	j = (char *)malloc((strlen(str) + 1) * sizeof(char));
		if (j == NULL)
		{
		return ('\0');
		}
	for (i = 0; i < strlen(str) + 1; i++)
	{
	j[i] = str[i];
	}

	return (j);
}
