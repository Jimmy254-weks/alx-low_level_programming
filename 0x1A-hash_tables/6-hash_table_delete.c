#include "hash_tables.h"

/**
* delete_hash_table - Delete a hash table and its contents.
* @ht: A pointer to the hash table to delete.
*/
void delete_hash_table(hash_table_t *ht)
{
hash_table_t *table = ht;
hash_node_t *node, *tmp;
unsigned long int i;
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}
}
free(table->array);
free(table);
}
