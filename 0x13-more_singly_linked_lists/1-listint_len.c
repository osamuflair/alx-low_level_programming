#include "lists.h"
/**
 * listint_len - prints the numbet of
 * elements of a listint_t list.
 * @h: the firat arguement
 * Return:the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
