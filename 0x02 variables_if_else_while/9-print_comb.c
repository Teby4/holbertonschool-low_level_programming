#include<stdio.h>

/**
 * main - print base 10 number separated by a ,
 * Return:0
 */

int main(void)
{

int p;
	for (p = 48; p < 58; p++)
	{

	putchar(p);

		if (p < 57)
		{
		putchar(44);
		putchar(32);
		}
	}

putchar('\n');
return (0);

}
