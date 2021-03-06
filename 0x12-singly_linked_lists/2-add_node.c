#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer that contains pointer that points to the first node
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;
	 p = (list_t *) malloc(sizeof(list_t));

	if (p == NULL)
	{
		return (NULL);
	}

	else
	{
		p->str = strdup(str);
		p->len = strlen(p->str);
		p->next = *head;
		*head = p;
		return (*head);
	}
}
