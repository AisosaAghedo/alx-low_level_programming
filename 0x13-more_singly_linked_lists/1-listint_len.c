#include "lists.h"
#include <stdlib.h>
/**
 * listint_len - function that returns the number of elements in a linked list
 * @h: pointer to node
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp;
	int i;

	temp = h;
	for (i = 0; temp != NULL; i++)
	{
		temp = temp->next;
	}
	return (i);
}
