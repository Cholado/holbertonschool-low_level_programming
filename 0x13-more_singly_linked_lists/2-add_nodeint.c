#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: douuble ptr to the beginning of a listint_t list
 * @n: integer to add to the list
 * Description: creates new value and asing it to the head position in the list
 * Return: ptr to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
