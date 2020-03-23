#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h: list to print
 * Description: verify if list exist and then iterates it printing each stage
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		c++;
	}
	return (c);
}
