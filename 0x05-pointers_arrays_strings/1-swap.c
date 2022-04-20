#include "main.h"
#include <stdio.h>

/**
 * swap_int - function to swap values of integers
 * @a: first integer to be swapped
 * @b: second integer to be swapped
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int num = *a;


	*a = *b;
	*b = num;
}

