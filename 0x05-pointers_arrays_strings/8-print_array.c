#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_array - function that prints elements of an array
 * @a: the array
 * @n:  the number of elements of the array to be printed
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{

	if (i == (n - 1))
	{
		printf("%d", a[i]);
	}
	else
	{
		printf("%d, ", a[i]);
	}
	}
	printf("\n");
}
