#include "hash_tables.h"
/*
 * hash_table_create - it creates a hash table
 * @size: the size of the hash table
 * 
 * Return: pointer of type hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    unsigned long int i;

    hash_table_t *table = (hash_table_t*) malloc(sizeof(hash_table_t));
    if(table == NULL)
        return (NULL);
    table->size = size;
    table->array = (hash_node_t**) calloc(table->size, sizeof(hash_node_t*));
    if (table->array == NULL)
        return (NULL);
    for (i = 0; i < table->size; i++)
    {
        table->array[i] = NULL;
    }    
    return (table);
}
