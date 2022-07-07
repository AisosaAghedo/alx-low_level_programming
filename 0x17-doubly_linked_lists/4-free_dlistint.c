#include "lists.h"

/**
 * free_dlistint - function that frees the memory of a doubly
 * linked list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		head = temp;
		temp = head->next;
		free(head);
	}
}
