#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: pointer to the first node of the linked list
 * @index: index of the node to return starting from 0
 * Return: nth node of linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	if (head != NULL)
	{
		if (index == 1)
		{
			temp = head->next;
		}
		else
		{
			for (i = 0; i < index - 1; i++)
			{
				head = head->next;
			}
			temp = head->next;
		}
		return (temp);
	}
	return (NULL);
}
