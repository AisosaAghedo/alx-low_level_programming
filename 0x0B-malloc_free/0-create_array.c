#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - function to create an array
 * @size: size of the array
 * @c: array of characters
 * Return: value
 */
char *create_array(unsigned int size, char c)
{
	int i;

	char *s = (char *)malloc(size * sizeof(char));

	s[0] = c;

	if (size == 0)
	{
		return ("NULL");
	}
	else
	{
		for (i = 1; i < (int)size; i++)
		{
			s[i] = c;
		}
		return (s);
	}
}

