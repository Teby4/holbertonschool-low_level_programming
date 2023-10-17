#include<stdio.h>

/**
 * main - 
 * Return: 0
 * Description:
 *
 */

int main(void)
{
	int n;

	for(n = 1; n <= 100; n++)
	{

		 	else if (n % 3 == 0 && n % 5 == 0)
                        {
                        printf ("FizzBuzz ");
                        }

			if (n % 3 == 0)
			{
			printf ("Fizz ");
			}

			if (n % 5 == 0)
			{
			printf ("Buzz ");
			}

		printf ("%d ", n);

	}

	printf ("\n");
	return (0);
}
