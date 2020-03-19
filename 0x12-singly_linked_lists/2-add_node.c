#include "lists.h"

/**
 * add_node - adds a node to the beginning of a linked list
 * @head: double pointer to a linked list
 * @str: string to add to the new node
 * Description: uses temp to place a new node in the head of the list
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (str == NULL)
		return (NULL);
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}
	temp->len = strlen(temp->str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
