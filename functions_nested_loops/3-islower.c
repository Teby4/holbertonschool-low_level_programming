#include<stdio.h>
#include"main.h"

/**
 * _islower - check if the letter is lowercase
 * Return: 0
 * @c Return: 1
 */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}

}
