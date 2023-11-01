#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * alloc_grid - copy a string
 * Return: pointer to new string
 * Description:
 * @width:
 * height:
 */

int **alloc_grid(int width, int height)
{
	int **j;
	int x = 0, y = 0;

	j = (int *)malloc(sizeof(int) * (width * height));
	if (j == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < width; x++)
	{

	for (y = 0; y < height; y++)
	{
	j[x][y] = 0;
	}
	}
	return (j);
}
