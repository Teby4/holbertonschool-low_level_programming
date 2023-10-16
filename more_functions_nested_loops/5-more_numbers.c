#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print numbers 1 to 9 10 times
 * Return:
 * Description:
 */

void more_numbers(void)
{
	int o;
	int s;
	int t;
	
	t = 16;
	s = 0;
	o = 0;

	while (o <= 9)
	{
	if (s >= 10)
	{	
	_putchar(o + '0');

		while (o == 9)
		{
		if (t >= 16 && t <= 20)
		 {
		 _putchar(t + '0');
		 t++;
		 }
		if (t == 20)
		{
		s++;
		t = 0;
		}
		o = 0;

		}
	o++;
	}
	}

}
