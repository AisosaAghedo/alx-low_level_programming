#include "main.h"
#include <stdlib.h>

/**
 * *array_range -  function that creates an array of integers
 * @min: minimum value
 * @max: maximum value
 * Return: array
 */
int *array_range(int min, int max)
{
	int *a;
	int i, r;

	if (min > max)
	{
		return (NULL);
	}
	r = max - min + 1;
	a = malloc(sizeof(int) * r);
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < r; i++, min++)
	{
		a[i] = min;
	}
	return (a);
}


