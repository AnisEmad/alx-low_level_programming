#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int x;
    hash_node_t *item;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "alsoAnis");
    hash_table_set(ht, "mentioner", "Anis");
    x = key_index((const unsigned char *)"mentioner", 1024);
    item = ht->array[x];
    while (item != NULL)
    {
        printf("==========\n");
        printf("%s\n", item->value);
        
        item = item->next;
    }
    return (EXIT_SUCCESS);
}
