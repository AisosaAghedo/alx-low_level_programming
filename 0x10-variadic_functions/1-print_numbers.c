#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed betwween numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int i;

	va_start(pn, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pn, int));
		if (separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(pn);
	printf("\n");
}



