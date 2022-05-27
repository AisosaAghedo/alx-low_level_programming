#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - function that prints a listint_t linked list
 * @head: pointer to head node
 * Returns: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int *temp = NULL;
	size_t counter = 0;
	temp = head

	if (head == NULL)
	{
		return (98);
	}
	else
	{
		while (temp != NULL)
		{
			printf("[%p] %i\n", temp->next, temp->n);
			temp = temp->next;
			counter++;
		}
	}
	return (counter);
}

