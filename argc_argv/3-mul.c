#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * Return: 0
 * Description:
 * @argc: argc
 * @argv: argv
 */

int main(int argc, char **argv)
{
	int r;

	if (argc > 1 && argc < 3);
	{
	printf ("%d\n",  argv [1] * argv[2]);
	}
	
	else
	{
	printf("Error");
	}

	return (0);
}
