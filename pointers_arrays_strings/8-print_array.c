#include "main.h"
#include <stdio.h>

/**
 * print_array - 
 * Return:
 * Description:
 * @a - array
 * @n - array
 */

void print_array(int *a, int n)
{
	int j;
	
	j = 0;
	while ( j != n)
	{
	printf("%d", a[j]);
	if (j != n - 1)
	{
		printf(", ");
	}
	j++;
	
	}
	printf("\n");
}
