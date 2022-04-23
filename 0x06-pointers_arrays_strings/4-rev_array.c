#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i;
	int arr[n];

	for (i = 0; i < n; ++)
	{
		arr[i] = a[i];
	}
	
	int j;
	i = 0;

	for (j = n -1; j >= 0; j--)
	{
		a[i] = arr[i];
		i++;
	}

	return (0);
}
