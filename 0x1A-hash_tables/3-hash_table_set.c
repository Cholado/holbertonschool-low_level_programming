#include "hash_tables.h"

/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add element to
 * @key: key for the data to add
 * @value: data value to store for key
 * Description: >>> ht['betty'] = 'holberton'
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newElem, *temp;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[idx];

	if (temp != NULL)
	{
		while (temp)
		{
			if (strcmp(temp->key, key) == 0)
			{
				temp->value = strdup(value);
				return (1);
			}
			temp = temp->next;
		}
	}

	newElem = malloc(sizeof(hash_node_t));
	if (newElem == NULL)
		return (0);

	newElem->key = strdup(key);
	newElem->value = strdup(value);
	newElem->next = NULL;

	if (ht->array[idx] != NULL)
		newElem->next = ht->array[idx];

	ht->array[idx] = newElem;

	return (1);
}
