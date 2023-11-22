#include "main.h"

/**
 * print_chessboard - ME QUIERO MORIR !!!!
 * Return:
 * Description:
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int cont, cont2;

	for (cont = 0; cont < 8; cont++)
	{
		for (cont2 = 0; cont2 < 8; cont2++)
		{
			_putchar(a[cont][cont2]);
		}

		_putchar('\n');
	}
}
