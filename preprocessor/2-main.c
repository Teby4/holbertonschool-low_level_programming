#include <stdio.h>

/**
 * main - return the name of the file
 * Return: file name
 * description:
 * @argc: argc
 * @argv: argv
 */

int main(int argc, char ** argv)
{
	(void)argc;

	printf("%s", argv[2]);
	return 0;
}
