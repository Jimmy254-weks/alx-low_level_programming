#include "hash_tables.h"

/**
* djb2_hash - Compute a hash using the djb2 algorithm.
* @str: The input string to hash.
*
* Return: The computed hash value.
*/
unsigned long int djb2_hash(const unsigned char *str)
{
unsigned long int hash;
int character;
hash = 5381;
while ((character = *str++))
hash = ((hash << 5) + hash) +character;
return (hash);
}
