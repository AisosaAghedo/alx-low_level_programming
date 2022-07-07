#include "lists.h"

/**
 * add_dnodeint_end - function that adds node to end of
 * a doubly linked list
 * @head: pointer to the head node of the doubly linked list
 * @n: the number to be added
 * Return: address to the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (*head == NULL)
		*head = new_node;
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
		new_node->prev = temp;
	}
	return (new_node);
}
