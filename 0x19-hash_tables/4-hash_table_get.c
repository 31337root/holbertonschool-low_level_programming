#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: hash table you want to look into.
 * @key: key you are looking for.
 *Return: value associated with the element, or NULL if key could not be found.
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	if (ht && key)
	{
		index = key_index((const unsigned char *) key, ht->size);
		if (ht->array[index])
		{
			if (strcmp((const char *)ht->array[index]->key, (char *) key) == 0)
			{
				return (ht->array[index]->value);
			}
		}
	}
	return (NULL);
}
