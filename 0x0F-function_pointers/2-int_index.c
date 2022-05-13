#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index -  function that searches for an integer
 * @array: array of numbers
 * @size:  number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * Return: value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		cmp(array[i]);
	}
	if (cmp != 0)
	{
		return (i);
	}
	return (-1);
}

