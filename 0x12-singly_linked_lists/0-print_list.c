#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer
 * Return number of nodes
 */
size_t print_list(const list_t *h)
{

	const list_t *pt;
	int i = 0;

	pt = h;
	while (pt != NULL)
	{
		pt = pt->next;
		i++;
	}
	pt = h;
	while (pt != NULL)
	{
		if (pt->str != NULL)
		{
			printf("[%u] %s\n", pt->len, pt->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		pt = pt->next;
	}
	return (i);
}
