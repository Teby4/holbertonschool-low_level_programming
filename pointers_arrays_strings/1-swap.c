#include "main.h"
#include <stdio.h>

/**
 * swap_int -
 * Return:
 * Description:
 * @a:
 * @b:
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*b = &c;
	*a = b;
}
