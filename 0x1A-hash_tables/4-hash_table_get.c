#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table used
 * @key: the key used to retrieve the vlaue
 *
 * Return: the value associated with the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *item;

	if (!ht)
		return (NULL);
	if (!key)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	item = ht->array[index];
	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}
	return (NULL);
}
