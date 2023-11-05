#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked- check for mallock
 * Return:
 * Description:
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	
	if (ptr == NULL)
	{
		exit(98);
	}
	
	return (ptr);
}
