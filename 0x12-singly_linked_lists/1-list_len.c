#include "lists.h"

/**
 * list_len - finds the number of elements in a linked list
 * @h: ptr to head of the linked list
 * Description: use temporal ptr address to count the ptrs in the list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i = 0;

	temp = h;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
