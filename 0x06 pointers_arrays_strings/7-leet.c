#include "main.h"

/**
 * leet - encode the string
 * Return: p
 * description:
 * @p: string
 */

char *leet(char *p)
{
	char *j = p;
	int cont, cont2;
	char a[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	cont2 = 0;

	while (*p != '\0')
	{
		for (cont = 0; cont < 10; cont++)
		{
			if (*p == a[cont])
			{
				*p = b[cont];
			}
		}

	cont2++;
	p++;
	}


	p = j;
	return (p);
}
