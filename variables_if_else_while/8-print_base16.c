#include<stdio.h>

/**
 * main - print base 10
 * Return: 0
 */

int main(void)
{
        char t;

        for (t = 48; t <= 57; t++)
        {
                putchar(t);
        }
	for (t = 97; t <= 102; t++)
	{
		putchar(t);
	}

        putchar('\n');
        return (0);
}
