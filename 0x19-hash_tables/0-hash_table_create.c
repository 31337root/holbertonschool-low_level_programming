#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: (hash_table_t), pointer to the newly created hash table.
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	if (size)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (new_table)
		{
			new_table->array = malloc(sizeof(hash_node_t *) * size);
			if (new_table->array)
			{
				new_table->size	= size;
				for (i = 0; i < new_table->size; i++)
				{
					new_table->array[i] = NULL;
				}
				return (new_table);
			}
		}
	}
	return (NULL);
}
