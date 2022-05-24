#include "lists.h"
#include <stdlib.h>
/**
 * free_list - function that  frees a list_t list
 * @head: pointer to the first node
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *pt;

	while (head != NULL)
	{
		pt = head;
		free(pt->str);
		free(pt);
		head = head->next;
	}
}
