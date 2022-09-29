#include "lists.h"

/**
 * add_dnodeint - a function that adds
 * a new node at the beginning of a list.
 * @head: the pointer to the first node
 * @n: the value of the new_node
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return NULL;
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = new_node->prev = NULL;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
		new_node->prev = NULL;
		*head = new_node;
	}
	return (new_node);
}
