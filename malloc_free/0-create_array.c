#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - array
 * Return: array null
 * Description:
 * @size: size of array
 * @c: c
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
	return ('\0');
	}
	a = (char*)malloc(size*sizeof(char));
	if (a == NULL)
	{
	return ('\0');
	}
	for (i = 0; i < size; i++)
	{
	a[i] = c;
	}
	return (a);
}
