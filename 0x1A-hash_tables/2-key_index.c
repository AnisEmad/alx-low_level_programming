#include "hash_tables.h"
/**
 * key_index - it should hash the key into an index
 * @key: this is the key used in the function
 * @size: the size of the array
 * 
 * Return: the index produced
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int index;

    index = hash_djb2(key);

    return (index % size);
}
