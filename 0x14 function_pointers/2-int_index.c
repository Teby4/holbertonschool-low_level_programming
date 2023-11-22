#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * int_index - array iterator
 * Return: pointer to array
 * @array: array
 * @size: size of array
 * @cmp: function
 */

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	if (size <= 0)
	{
	return (-1);
	}

	if (array != NULL && cmp != NULL)
	{
	for (i = 0; i < size; i++)
	{
	if (cmp(array[i]))
	{
	return (i);
	}
	}
	}

	return (-1);
}
