#include "main.h"
#include <stdio.h>

/**
 * swap_int -
 * Return:
 * Description:
 * @a: a number
 * @b: b number
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
