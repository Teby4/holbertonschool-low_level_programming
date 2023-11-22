#include<stdio.h>
#include"main.h"

/**
 * print_to_98 - entry point
 * Description: a
 * @n: variable
 * Return:
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
	printf("%d\n", n);
	}



}
