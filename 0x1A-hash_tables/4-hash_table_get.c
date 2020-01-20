#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look at
 * @key: key you are looking for
 * Return: value associated with element or null if not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL || key == NULL)
		return (NULL);
	i = key_index((const unsigned char *) key, ht->size);
	node = ht->array[i];

	if (node == NULL)
		return (NULL);
	while (node)
	{
		if (strcmp(key, node->key) == 0)
			return (node->value);
		node = node->next;
	}
	return (NULL);
}