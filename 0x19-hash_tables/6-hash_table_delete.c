#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 * Return: void.
*/

void hash_table_delete(hash_table_t *ht)
{

	unsigned long int i;
	hash_node_t *temp = NULL;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (ht->array[i]->key)
					free(ht->array[i]->key);
				if (ht->array[i]->value)
					free(ht->array[i]->value);
				while (ht->array[i]->next)
				{
					temp = ht->array[i];
					ht->array[i] = ht->array[i]->next;
					free(temp);
					if (ht->array[i]->key)
						free(ht->array[i]->key);
					if (ht->array[i]->value)
						free(ht->array[i]->value);
				}
			}
			free(ht->array[i]);
		}
		free(ht->array);
		free(ht);
	}
}
