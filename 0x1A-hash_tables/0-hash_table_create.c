#include "hash_tables.h"
/**
 * hash_table_create - function that creates an hash table
 * @size: the size of the array
 * Return: Returns pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = (hash_table_t *) malloc(sizeof(hash_table_t));
	unsigned int i = 0;

	if (table == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));
	if (table->array == NULL)
	{
		free(table->array);
		return (NULL);
	}
	while (i < size)
	{
		table->array[i] = (NULL);
		i++;
	}
	return (table);
}
