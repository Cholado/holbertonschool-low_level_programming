#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: ptr to the start of the list
 * Description: free position and let list return to head
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *p, *next;

	p = head;
	while (p != NULL)
	{
		next = p->next;
		free(p->str);
		free(p);
		p = next;
	}

}
