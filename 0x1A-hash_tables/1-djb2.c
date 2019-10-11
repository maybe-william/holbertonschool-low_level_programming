#include "hash_tables.h"

/**
 * hash_djb2 - a common string hashing function
 * @str: the string to hash
 * Return: a hashed number of the string
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;
	unsigned char *st;

	st = (unsigned char *)str;
	while ((c = *st++))
		hash = ((hash << 5) + hash) + c;

	return (hash);
}
