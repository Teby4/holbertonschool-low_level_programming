#include <stdio.h>

/**
* main - print alphabet
* Return: 0
*/

int main(void)
{
char alp;
char AZ;

for (alp = 'a'; alp <= 'z'; alp++)
{
putchar(alp);
}
for (AZ = 'A'; AZ <= 'Z'; AZ++)
{
putchar(AZ);
}
putchar('\n');
return (0);

}
