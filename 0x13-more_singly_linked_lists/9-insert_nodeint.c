#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - function that inserts a node at a given position
 * @head: pointer that points to the address of the first node
 * @idx: index of new list
 * @n: interger
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	unsigned int i;

	if (temp == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->n = n;
	if (head != NULL)
	{
		if (idx == 0)
		{
			temp->next = *head;
			*head = temp;
		}
		else
		{
			for (i = 0; i < idx - 1; i++)
			{
				*head = (*head)->next;
			}
			temp->next = (*head)->next;
			(*head)->next = temp;
		}
		return (temp);
	}
	return (NULL);
}
