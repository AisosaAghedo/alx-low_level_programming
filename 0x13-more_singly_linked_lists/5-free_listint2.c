#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - function that frees a listint_t list
 * @head: pointer
 * Return: 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp = *head;

	if (*head != NULL)
	{
		while (tmp != NULL)
		{
			tmp = tmp->next;
			free(*head);
			*head = tmp;
		}
	}
}
