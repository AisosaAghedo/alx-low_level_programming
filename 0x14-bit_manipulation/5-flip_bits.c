#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip
 *  to get from one number to another
 * @n: first interger
 * @m: second interger
 * Return: number of bits you would need to flip to get from one to the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, check;
	unsigned int counter, i;

	counter = 0;
	check = 1;
	diff = n ^ m;
	for (i = 0; i <= (sizeof(unsigned long int) * 8 - 1); i++)
	{
		if (check == (diff & check))
			counter++;
		check <<= 1;
	}
	return (counter);
}
