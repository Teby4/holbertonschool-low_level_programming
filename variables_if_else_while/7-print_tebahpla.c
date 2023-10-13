#include<stdio.h>

/**
 * main - print alphabet
 * Return: 0
 */

int main(void)
{
        char alp;

        for (alp = 'z'; alp >= 'a'; alp--)
        {
        putchar(alp);
        }
        putchar('\n');
        return (0);

}
