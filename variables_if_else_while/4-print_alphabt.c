#include<stdio.h>

/**
 * main - print alphabet
 * Return: 0
 */

int main(void)
{
        char alp;

        for (alp = 'a'; alp <= 'z'; alp != 'q'; alp != 'e'; alp++)
        {
        putchar(alp);
        }
        putchar('\n');
        return (0);

}
