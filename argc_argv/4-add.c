#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
	int j = 0;

	for (i = 0; i < argc; i++)
	{
		for (; j < strlen(argv[i]); j++)
		{
		if (isdigit(argv[i][j]) != 0)
		{
		printf("Error\n");
		return (1);
		}
		}
	r = r + atoi(argv[i]);
	}
	printf("%d\n", r);
	return (r);
}
