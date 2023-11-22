#include "main.h"

/**
 * reverse_array - reverse the array
 * Return:
 * Description:
 * @a: array
 * @n: number of elements to copy
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;
	while (i < n - 1)
	{
	temp = a[i];
	a[i] = a[n - 1];
	a[n - 1] = temp;
	i++;
	n--;
	}
}
