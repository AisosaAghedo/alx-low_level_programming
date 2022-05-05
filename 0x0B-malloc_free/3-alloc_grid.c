#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: takes in width of grid
 * @height: height of grid
 * Return: grid with freed spaces
 */
int **alloc_grid(int width, int height)
{
	int **res;
	int i, j;


	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	res = malloc(sizeof(int *) * height);
	if (res == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		res[i] = malloc(sizeof(int) * width);
		if (res[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
			{
				free(res[i]);
			}
			free(res);
			return (NULL);
		}
	}
	for (i = 0; j < width; j++)
		res[i][j] = 0;
	return (res);
}
