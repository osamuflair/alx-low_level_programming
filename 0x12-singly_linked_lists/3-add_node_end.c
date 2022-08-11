#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first arguement
 * @str: second arguement
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t count;

	new_node->str = NULL;

	if ((*head) == NUL)
	{
		(*head) = new_node;
		(*head)->next = (*head);
		count = 0;
	}
	else
	{
		while ((*head) != NULL)
		{
			for (count = 0; str[count]; count++)
				;
			(*head) = (*head)->next;
		}
		(*head)->next = new_node;
	}
	return ((*head)->next);
}
