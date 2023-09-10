#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table
 * @ht: the hash table used
 * 
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t **array = ht->array;
	hash_node_t *item;
	unsigned long int i;
	int check = 0;

	if (!ht || ht->cnt == 0)
	{ 
		printf("{}\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = array[i];
		while (item)
		{
			if (check != 0)
				printf(", ");
			printf("'%s' : '%s'", item->key, item->value);
			check = 1;
			item = item->next;
		}
	}
	printf("}");

}
