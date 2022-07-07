#include "lists.h"
/**
 * sum_dlistint - function that returns sums values
 * of a double linked list
 * @head: pointer to th first node of the doubly linked list
 * Return: sum of the values of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
