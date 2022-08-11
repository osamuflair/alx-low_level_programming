#include "lists.h"
/**
 * list_len - prints the number of elements in a linked list_t list
 * @h: its arguement
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
