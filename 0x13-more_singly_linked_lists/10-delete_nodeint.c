#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to delete
 * Description: step in index position and deletes it and re-connect the list
 * Return: pointer to the indexed node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *position, *recon;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		recon = (*head)->next;
		free(*head);
		*head = recon;
		return (1);
	}
	position = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (position->next == NULL)
			return (-1);
		position = position->next;
	}
	recon = position->next;
	position->next = recon->next;
	free(recon);
	return (1);
}
