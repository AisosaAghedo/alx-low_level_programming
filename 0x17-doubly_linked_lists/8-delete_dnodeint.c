#include "lists.h"
/**
 * delete_dnodeint_at_index - function that deletes a node at an index
 * @head: double pointer to the doubly linked list
 * @index: index
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *new;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);
	new = *head;
	if (index == 0)
	{
		*head = new->next;
		if (new->next != NULL)
		{
			new->next->prev = NULL;
		}
		free(new);
		return (1);
	}
	for (i = 0; i < index; i++)
	{
		if (new->next == NULL)
			return (-1);
		new = new->next;
	}
	new->prev->next = new->next;
	if (new->next != NULL)
		new->next->prev = new->prev;
	free(new);
	return (1);
}
