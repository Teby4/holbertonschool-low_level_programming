#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * array_iterator - array iterator
 * Return:
 * @array: array
 * @size: size of array
 * @action: action
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL) 
	{	
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
