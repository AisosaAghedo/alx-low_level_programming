#include "main.h"
#include <stdlib.h>

/**
 * get_bit -  function that returns the value of a bit at a given index
 * @index:  index, starting from 0
 * @n: integer
 * Return:  value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int indexVal;

	if (n == 0)
	{
		return (-1);
	}
	else
	{
		indexVal = (n >> index) & 1;
	}
	return (indexVal);
}
