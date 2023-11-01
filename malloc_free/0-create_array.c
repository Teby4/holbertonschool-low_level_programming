#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
	char **ar;

	if (size == 0)
	{
	return ('\0');
	}
	int *a = (int*)malloc(size*sizeof(int));
	if (a == '\0')
	{
	return ('\0')
	}
	return (a);
	free(a);
}
