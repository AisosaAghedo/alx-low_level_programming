#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{

	const listint_t *temp;
	int i = 0;

	temp = h;
	while (temp != NULL)
	{
		printf("%lu\n", temp);
		temp = temp->next;
		i++;
	}
	return (i);
}

