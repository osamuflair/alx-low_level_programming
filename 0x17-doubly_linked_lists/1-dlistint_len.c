#include "lists.h"

/**
 * dlistint_len - a function that returns the number of nodes in a list
 * @h: the head node
 * Return: the number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		h = h->next;
		count++;
	}
	return (count);
}
