#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function given  on each element of an array
 * @size:  size of the array
 * @action:  pointer to the function
 * @array: array of integers
 * Return Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action == NULL)
	{
		return;
	}
	if (array == NULL)
	{
		return;
	}
	for (i = 0; i < (int)size; i++)
	{
		action(array[i]);
	}
}
