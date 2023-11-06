#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _calloc - Allocates memory for an array, initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * Return: Pointer to the allocated memory, or NULL if nmemb or size is 0,
 *         or if malloc fails.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);

	return (ptr);
}
