#include "lists.h"
/**
 * reverse_listint - function that  reverses a linked list
 * @head: pointer that points to the first node
 * Return: a first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp1 = NULL;
	listint_t *temp2 = NULL;

	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp1;
		temp1 = *head;
		*head = temp2;
	}
	*head = temp1;
	return (*head);
}
