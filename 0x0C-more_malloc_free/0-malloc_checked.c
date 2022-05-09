#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked -  function that allocates memory using malloc
 * @b: value
 * Return: pointer
 */
 void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (s = NULL)
	{
		exit(98);
	}
	return (s);
}
