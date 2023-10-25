#include "main.h"

/**
 * _memset- me quiero morir !!!!!!
 * Return: pointer to s
 * Description:
 * @s: string
 * @b: byte
 * @n: number
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (*s > n)
	{
	while (*s != '\0')
	{
	s = b;
	s++;
	}
	}
}
