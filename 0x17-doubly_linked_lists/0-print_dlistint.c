#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements of a list
 * @h: the head node
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return 0;
	while (h != 0)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}
	return count;
}
