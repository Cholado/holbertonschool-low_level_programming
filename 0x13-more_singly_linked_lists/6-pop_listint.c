#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: double pointer to the beginning of the list
 * Description: locates current head node and creates a var to return its value
 * Return: values inside head node.
 */
int pop_listint(listint_t **head)
{
	listint_t *pop;
	int data;

	if (head == NULL || *head == NULL)
		return (0);
	pop = *head;
	*head = pop->next;
	data = pop->n;
	free(pop);
	return (data);
}
