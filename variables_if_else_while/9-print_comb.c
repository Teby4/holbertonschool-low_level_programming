#include<stdio.h>

/**
 * main - print base 10 number separated by a ,
 * Return:0
 */

int main(void)
{

int p;
	for (p = '0'; p <= '9'; p++)
	{

	putchar(p);

		if (p < 9)
		{
		putchar(',');
		putchar(' ');
		}
	}

putchar('\n');
}
