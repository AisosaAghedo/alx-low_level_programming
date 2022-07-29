#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char checker = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (checker == 1)
				printf(", ");
			printf("'%s': '%s'", temp->key, temp->value);
			checker = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
