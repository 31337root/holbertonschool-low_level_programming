#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value: value associated with the key.
 * Return: 1 if it succeeded, 0 otherwise.
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node = NULL;

	if (key && ht)
	{
		index = key_index((const unsigned char *) key, ht->size);
		ht->array[index] = malloc(sizeof(hash_node_t));

		if (ht->array[index])
		{
			if (!ht->array[index]->key)
			{
				ht->array[index]->key = (char *) key;
				ht->array[index]->value = strdup(value);
				ht->array[index]->next = NULL;
				return (1);
			}
			else if (!ht->array[index]->next)
			{
				ht->array[index]->next = malloc(sizeof(hash_node_t));
				new_node = ht->array[index]->next;
				new_node->key = (char *) key;
				new_node->value = strdup(value);
				new_node->next = NULL;
				return (1);
			}
		}
	}
	return (0);
}
