#include "main.h"
/**
 * print_square - Entry point
 * @size: size of the square
 * Return: 0
 */
void print_square(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++);
		{
			for (y = 0; y < size; y++);
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
