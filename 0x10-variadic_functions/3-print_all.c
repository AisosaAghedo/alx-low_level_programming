#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: anything
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	unsigned int i = 0, x, y = 0;
	char *s;
	const char v_arg[] = "cifs";

	va_start(pa, format);
	while (format && format[i])
	{
		x = 0;
		while (v_arg[x])
		{
			if (format[i] == v_arg[x] && y)
			{
				printf(", ");
				break;
			}
			x++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(pa, int)), y = 1;
				break;
			case 'i':
				printf("%d", va_arg(pa, int)), y = 1;
				break;
			case 'f':
				printf("%f", va_arg(pa, double)), y = 1;
				break;
			case 's':
				s = va_arg(pa, char *), y = 1;
				if (!s)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
		}
		i++;
	}
	printf("\n"), va_end(pa);
}
