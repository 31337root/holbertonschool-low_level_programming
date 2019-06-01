#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 * Return: void.
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, k = 0;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i])
			{
				if (k == 0)
					printf("{");
				else
					printf(", ");
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				k++;
			}
			else if (((i + 1) == ht->size) && k == 0)
			{
				printf("{");
			}
		}
		printf("}\n");
	}
}
