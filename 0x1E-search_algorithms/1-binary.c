#include "search_algos.h"
#include <stdlib.h>
/**
 * binary_search - function that searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array : pointer to the first element of the array to search
 * @size : number of elements in array
 * @value : value to search for
 * Return:  index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
	{
		return (-1);
	}
	return (bin_search(array, value, 0, size - 1));
}
/**
 * bin_search - function to recursively search for value i sorted array
 * @array : sorted array
 * @value : value to search for
 * @l : left hand side of array
 * @r : right hand side of array
 * Return: index where value was located
 */
int bin_search(int array[], int value, int l, int r)
{
	int mid = l + (r - l) / 2;
	int i;

	if (l > r)
	{
	return (-1);
	}
	printf("Searching in array: ");
	for (i = l; i <= r; i++)
	{
		printf("%d", array[i]);
		if (i != r)
		{
			printf(", ");
		}
	}
	printf("\n");

	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] > value)
	{
		return (bin_search(array, value, l, mid - 1));
	}
	else
	{
		return (bin_search(array, value, mid + 1, r));
	}
}







