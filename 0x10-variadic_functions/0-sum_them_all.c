#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: constant value
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sn;
	unsigned int i,total_sum;

	if (n == 0)
	{
		return (0);
	}
	va_start (sn, n);
	total_sum = 0;
	for (i = 0; i < n; i++)
	{
		total_sum+= va_arg(sn, int);
	}
	va_end (sn);
	return (total_sum);
}
