#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: first arguement
 * @str: second arguement
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t string;

	if (new_node == NULL)
	{
		return (NULL);
	}
	else
	{
		new_node->str = strdup(str);
		for (string = 0; str[string]; string++)
			;
		new_node->len = string;
		new_node->next = (*head);
		(*head) = new_node;
	}
	return (*head);
}
