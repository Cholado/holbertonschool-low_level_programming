#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: double pointer to the list
 * Description: free the nodes one by one & sets list null
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
