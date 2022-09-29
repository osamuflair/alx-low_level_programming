#include "lists.h"

/**
 * add_dnodeint_end - a function that adds
 * a new node at the end of a list.
 * @head: the pointer to the first node
 * @n: the value of the new_node
 * Return: the address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		new_node->next = new_node->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != 0)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
	}
	return (new_node);
}
