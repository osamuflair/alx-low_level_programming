#include "lists.h"
/**
 * add_nodeint - a function that add a neq node
 * at the begining of the list
 * @head: the first element of the list
 * @n: the content of the new list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return ((*head));
}
