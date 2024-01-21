#include "search_algos.h"

/**
 * binary_search - linear search
 * @array: array
 * @size: size
 * @value: value
 * Return: return
 */

int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	int middle, target;

	if (array == 0)
		return (-1);

	while (low <= high)
	{
		middle = low + (high - low) / 2;
		target = array[middle];

		print_array(array + low, high - low + 1);
		if (target < value)
		{
			low = (middle + 1);
		}
		else if (target > value)
		{
			high = (middle - 1);
		}
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_array - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	printf("Searching in array: ");
	while (array && i < size)
	{
		if (i == size - 1)
			printf("%d", array[i]);
		else
			printf("%d, ", array[i]);
		++i;
	}
	printf("\n");
}
