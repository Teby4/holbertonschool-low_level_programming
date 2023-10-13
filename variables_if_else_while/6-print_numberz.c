#include<stdio.h>

/**
 * main - print base 10
 * Return: 0
 */

int main(void)
{
        int t;

        for (t = '0'; t <= '9'; t++)
        {
                putchar(t);
        }

        putchar('\n');
        return (0);
}
