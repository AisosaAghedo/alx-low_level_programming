#include "hash_tables.h"
/**
 * key_index - function that gives the index of a key
 * @size: size of the array of the hash table
 * @key: a key whose index is to be determined then returned
 * Return: index for the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
