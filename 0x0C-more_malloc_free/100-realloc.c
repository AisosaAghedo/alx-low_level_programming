#include "main.h"
#include <stdlib.h>
/**
 * void *_realloc - function that reallocates a memory block 
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size:  size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *p = ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		return (a);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	a = malloc(new_size);
	if (a == NULL)
	{
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_size = old_size;
		for (i = 0; i < new_size; i++)
		{
			a[i] = p[i];
		}
		free(ptr);
	}
	return (a);
}
