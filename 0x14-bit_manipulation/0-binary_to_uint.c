#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int temp = 0, sum = 0;
	unsigned int binary = atoi(b);

	if (b != NULL)
	{
		while (binary != 0)
		{
			temp = binary % 10;
			temp <<= i;
			sum += temp;
			binary = binary / 10;
			i++;
		}
		return (sum);
	}
	return (0);
}
