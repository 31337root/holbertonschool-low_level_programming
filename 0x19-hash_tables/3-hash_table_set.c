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
unsigned long int index, equal;
hash_node_t *new_node = NULL, *temp = NULL;

if (key && ht)
{	index = key_index((const unsigned char *) key, ht->size);
	if (!ht->array[index])
	{	ht->array[index] = malloc(sizeof(hash_node_t));
		ht->array[index]->key = NULL;
		ht->array[index]->next = NULL; }
	if (ht->array[index])
	{
		if (ht->array[index]->key)
		{	equal = strcmp((const char *)ht->array[index]->key, (char *) key);
			if (equal == 0)
			{	ht->array[index]->value = strdup(value);
				return (1); }
			if (ht->array[index]->next)
			{	temp = ht->array[index];
				while (ht->array[index]->next)
				{	ht->array[index] = ht->array[index]->next;
					equal = strcmp((const char *)ht->array[index]->key, (char *) key);
					if (equal == 0)
					{	ht->array[index]->value = strdup(value);
						ht->array[index] = temp;
						return (1); }}
				ht->array[index] = temp; }
				new_node = malloc(sizeof(hash_node_t));
				new_node->key = strdup(key);
				new_node->value = strdup(value);
				new_node->next = ht->array[index];
				ht->array[index] = new_node;
				return (1); }
		else
		{	ht->array[index]->key = strdup(key);
			ht->array[index]->value = strdup(value);
			ht->array[index]->next = NULL;
			return (1); }}}
return (0);
}
