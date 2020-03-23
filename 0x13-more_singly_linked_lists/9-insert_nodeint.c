#include "lists.h"

/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: double pointer to the first node in the list
 * @idx: index of the node to insert
 * @n: data value of new node
 * Description: set position on index node and place new node there
 * Return: pointer to the indexed node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *position, *newNode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		position = *head;
		for (i = 0; i < idx - 1 && position != NULL; i++)
		{
			position = position->next;
		}
		if (position == NULL)
			return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	newNode->next = position->next;
	position->next = newNode;
	return (newNode);
}
