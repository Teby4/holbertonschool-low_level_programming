#include "main.h"

/**
 * _pow_recursion - recursion
 * Return:
 * Description:
 * @x: number
 * @y: number
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return(0);
	}
	else if (y < 0)
	{
		return(-1);
	}
		return (x * _pow_recursion(x , y - 1));
}
