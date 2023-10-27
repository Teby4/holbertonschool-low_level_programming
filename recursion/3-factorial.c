#include "main.h"
/**
 * factorial - return factorial of given number
 * Return: -1 0 1
 * Description:
 * @n: numer
 */



int factorial(int n)
{

	if(n <= 1) 
	{
		return (1);
	}
	
		return (n * factorial(n - 1));
}
