#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_calloc - function that allocates memory for an array, using malloc
 * @nmemb:  This is the number of elements to be allocated
 * @size: This is the size of elements
 * Return:  a pointer to the allocated memory, or NULL if the request fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *p;

	p = (int *) calloc(nmemb, sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i <= (int)nmemb; i++)
		{
			p = (p + i);
		}
	}
	return (p);
}
