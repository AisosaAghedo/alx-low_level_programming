#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - function that adds a new node at the end of list
 * @head: pointer that points to the head node
 * @n: interger to be added
 * Return: address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = *head;
	listint_t *temp_1 = malloc(sizeof(listint_t));

	if (temp_1 == NULL)
	{
		free(temp_1);
		return (NULL);
	}
	temp_1->n = n;
	temp_1->next = NULL;
	if (*head == NULL)
	{
		*head = temp_1;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = temp_1;
	}
	return (temp_1);
}
