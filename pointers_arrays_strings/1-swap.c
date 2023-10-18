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
	*a = &b;
	*b = &a;
}
