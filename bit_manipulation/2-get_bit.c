#include <stdio.h>
#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get.
 *
 * Return: value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1 << index;
	return ((n & mask) ? 1 : 0);
}
