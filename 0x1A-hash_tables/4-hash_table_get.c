#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: table to retrieve value from
 * @key: key to find value
 * Description: >>> ht['betty']
 * Return: value associated with key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	if (temp == NULL)
		return (NULL);

	while (strcmp(temp->key, key) != 0)
		temp = temp->next;

	if (temp == NULL)
		return (NULL);

	return (temp->value);
}
