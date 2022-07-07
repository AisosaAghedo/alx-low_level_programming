#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node
 * of a doubly linked list that starts count from 0
 * @head: pointer to head node
 * @index: the index of the node to be returned
 * Return: address of indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int size_node = 0, i;

	if (head == NULL)
		return (NULL);

	while (temp != NULL)
	{
		temp = temp->next;
		size_node++;
	}
	temp = head;
	if (index > size_node - 1)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}
