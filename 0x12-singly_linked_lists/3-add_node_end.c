#include "main.h"
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: first arguement
 * @str second arguement
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t new_node = malloc(sizeof(list_t));
	count = 0;

	new_node->str = NULL;
	
	if ((*head) == NUL)
	{
		(*head) = new_node;
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
	return (count);
}
