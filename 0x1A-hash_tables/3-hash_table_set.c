#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in a hash table.
 * @ht: A pointer to the hash table.
 * @key: The key to add - cannot be an empty string.
 * @value: The value associated with key.
 *
 * Return: 0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new;
	char *cpy;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cpy = strdup(value);
	if (cpy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cpy;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(cpy);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = cpy;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
