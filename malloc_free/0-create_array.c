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

	if (size == 0)
	{
	return ('\0');
	}
	c = (int*)malloc(size*sizeof(int));
	if (c == '\0')
	{
	return ('\0');
	}
	return (c);
	free(c);
}
