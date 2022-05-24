#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to the first node of the string
 * @str: string to be duplicated
 * Return:  address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *pt;
	list_t *new;

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		pt = *head;
		while (pt->next != NULL)
			pt = pt->next;
		pt->next = new;
	}
	return (new);
}
