#include "lists.h"

/**
 * add_dnodeint - function that adds a node to the beginning of a
 * doubly linked list
 * @head: pointer to the first node
 * @n: number to be added to the begginning of the list
 * Return: address of new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = (dlistint_t *) malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	temp->next = NULL;
	if (*head == NULL)
		*head = temp;
	else
	{
		temp->next = *head;
		(*head)->prev = temp;
		*head = temp;
	}
	return (temp);
}
