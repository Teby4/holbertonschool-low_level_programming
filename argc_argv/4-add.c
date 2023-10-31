#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - main function
 * Return: 0
 * Description:
 * @argc: argc
 * @argv: argv
 */

int main(int argc, char **argv)
{
	int i;
	int r = 0;

	for (i = 0; i < argc; i++)
	{
	if (isdigit(argv[i]) != 0)
	{
	printf("Error\n");
	return (1);
	}
	r = r + atoi(argv[i]);
	}
	printf("%d\n", r);
	return (r);
}
