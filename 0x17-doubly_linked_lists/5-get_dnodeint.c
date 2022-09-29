#include "lists.h"

/**
 * get_dnodeint_at_index - a function
 * that returns the nth node of a linked list
 * @head: the pointer to the first node
 * @index: the nodes index, starting from 0
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
		count++;
		if (count == index)
			break;
	}
	if (count == index)
		return (temp);
	else
		return (NULL);
}
