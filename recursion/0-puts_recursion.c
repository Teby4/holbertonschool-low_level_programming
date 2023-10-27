#include "main.h"

/**
 * _puts_recursion - puts recursion
 * Return:
 * Description:
 * @s: str
 */

void _puts_recursion(char *s)
{
	recursion(_putchar(*s));
	_putchar('\n');
}
