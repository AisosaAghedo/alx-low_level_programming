#include <stdio.h>
#include "main.h"
/**
 * print_number - function to print an integer
 * @n: an integer
 * Return: 0
 */
void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m = -n;
	}
	else
	{
		m = n;
	}
	if (m / 10 != 0)
		print_number(m / 10);
	_putchar((m % 10) + '0');
}

