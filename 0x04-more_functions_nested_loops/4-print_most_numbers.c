#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_most_numbers - Function to print some numbers
 * Return: 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num == '2' || num == '4')
		{
			continue;
		}
		else
		{
			_putchar(num);
		}
	}
	_putchar('\n');
}
