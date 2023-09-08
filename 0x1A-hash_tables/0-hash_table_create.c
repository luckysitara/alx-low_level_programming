#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_create - create a new hash table
 * free the hash tablei
 * @size: Size of the hash table
 * Return: null
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

	/** using malloc allocate memory for the hash table **/
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	/** allocate another memory for the arrary of pointers **/
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		new_table->array[i] = NULL;
		i++;
	}
	new_table->size = size;

	return (new_table);
}
