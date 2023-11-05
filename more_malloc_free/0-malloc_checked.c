<<<<<<< HEAD
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked- check for mallock
 * Return:
 * Description:
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
	int *j;

	j =(int*)malloc(b * sizeof(int));

	if (j == NULL)
	{
		exit(98);
	}
	return (j);
}
=======
#include "main.h"
#include <stdio.h>

/**
 * malloc_checked- check for mallock
 * Return:
 * Description:
 * @b: unsigned int
 */

void *malloc_checked(unsigned int b)
{
    int *j;

    j =(int*)malloc(b * sizeof(int));

    if (j == NULL)
    {
        exit(98);
    }

    return (j);
}
>>>>>>> 41c8afbfbc03247de3b6aa8737ba0f4a45414392
