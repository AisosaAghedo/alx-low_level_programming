#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in the list
 * @h: pointer to first node of the doubly linked list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	size_t length = 0;

	while (temp != NULL)
	{
		length++;
		temp = temp->next;
	}
	return (length);
}
