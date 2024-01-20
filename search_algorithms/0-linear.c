#include "search_algos.h"

/**
 * linear_search - linear search
 * @array: array
 * @size: size
 * @value: value
 * Return: return
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j;

	for (j = 0; j <= size; j++)
	{
		if (value == array[j])
		{
			return (j);
		}
	}

	return (-1);
}