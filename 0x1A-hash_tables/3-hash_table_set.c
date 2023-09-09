#include "hash_tables.h"
/**
 * hash_table_set - adds an element to  the hash table
 * @ht: the hash table used
 * @key: the key used to hash the value into the table
 * @value: the value which will be stored
 *
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup; 
	unsigned long int index;
	hash_node_t *new;

	if (key[0] == '\0')
		return (0);
	dup = strdup(value);
	if (dup == NULL)
		return (0);
	

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = (char *)key;
	new->value = dup;
	new->next = NULL;
	if (ht->array[index] != NULL)
		new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
