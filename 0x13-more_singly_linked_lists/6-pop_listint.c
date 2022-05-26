#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint -  function that deletes the head node of a linked list
 * @head: pointer pointing to the pointer of the head node
 * Return: head node data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = 0;

	if (*head != NULL)
	{
		n = temp->n;
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	return (n);
}
