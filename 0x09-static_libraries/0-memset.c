#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Starting address of the memory to be filled.
 * @b: The desired value.
 * @n: Number of bytes to be changed.
 *
 * Return: Pointer to the changed array with the new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
