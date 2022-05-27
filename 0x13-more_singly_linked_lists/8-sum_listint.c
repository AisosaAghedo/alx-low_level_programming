#include "lists.h"
/**
 * sum_listint - function that sums up a linked list
 * @head: pointer to the first node of the linked list
 * Return: sum of the numbers in the list
 */
int sum_listint(listint_t *head)
{
	listint_t *temp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
