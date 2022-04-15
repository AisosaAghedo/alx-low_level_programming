#include "main.h"
/**
 * print_triangle - function that prints a triangle
 *
 * @size: print size
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
