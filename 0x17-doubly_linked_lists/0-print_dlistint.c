#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t size_nodes = 0;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		size_nodes += 1;
		temp = temp->next;
	}
	return (size_nodes);
}
