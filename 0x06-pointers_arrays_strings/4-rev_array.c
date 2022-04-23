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
	int arr[1000];
	int j;
	int b = 0;

	for (i = 0; i < n; i++)
	{
		arr[i] = a[i];
	}

	for (j = n - 1; j >= 0; j--)
	{
		a[b] = arr[i];
		b++;
	}
}
