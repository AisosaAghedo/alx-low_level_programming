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
	int i;

	if (min > max)
	{
		return (NULL);
	}
	a = malloc(sizeof(int) * (max - min) + sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++)
	{
		a = a[i];
		min++;
	}
	return (a);
}


