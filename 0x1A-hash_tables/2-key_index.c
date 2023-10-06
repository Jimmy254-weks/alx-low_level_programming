#include "hash_tables.h"

/**
* get_key_index - Calculate index for storing a key pair in hash table.
* @key: The key to calculate the index for.
* @size: The size of the hash table array.
*
* Return: The index where the key should be stored.
* Description: This function uses the djb2 algorithm for hashing.
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash = hash_djb2(key);
unsigned long int index = hash % size;
return (index);
}
