#include "main.h"
#include <stdio.h>
/**
 * print_line - Entry point
 * @n: number of times to print a line
 * Return: 0
 */
void print_line(int n)
{
	int y;
	int z;

	z = '_';
	for (y = 0; y < n; y++)
	{
		if (n > 0)
		{
			_putchar(z);
		}
	}
	_putchar('\n');
}
