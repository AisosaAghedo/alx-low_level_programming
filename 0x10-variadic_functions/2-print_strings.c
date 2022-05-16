#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between the strings
 * @n:  number of strings passed to the function
 * Return: string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ps;
	unsigned int i;
	char *s;

	va_start(ps, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ps, char *);
		if (s == NULL)
		{
			printf("(nil)");
		}
		printf("%s", s);
		if (separator != NULL)
		{
			if (i != (n -1))
			{
				printf("%s", separator);
			}

		}
	}
	va_end(ps);
	printf("\n");
}
