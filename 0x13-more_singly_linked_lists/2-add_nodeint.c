#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint -  function that adds a new node at the beginning of a listint_t list
 * @head: pointer that points to the head node
 * @n: integers
 * Return: address or new element or NULL if none
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (*head);
}
