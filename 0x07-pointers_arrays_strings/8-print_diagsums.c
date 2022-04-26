#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - function to print sum of 2 diagonals of a square matrix
 * @a: 2D dimensional array
 * @size: size of the array
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sumA;
	int sumB;

	sumA = 0;
	sumB = 0;
	for (i = 0; i < size; i++)
	{
		sumA = sumA + *(a + i * size + i);
		sumB = sumB + *(a + i * size + size - i - 1);
	}
	printf("%i, %i\n", sumA, sumB);
}

