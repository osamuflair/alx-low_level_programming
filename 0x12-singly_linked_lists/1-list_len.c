#include "lists.h"
/**
 * list_len - returns the number of
 * elements in a linked list_t list
 * @h: its arguement
 * Return: number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	while (h != NULL)
	{
		size_t count = 0;

		if (h->str == NULL)
		{
			count = 0;
		}
		else
		{
			count++;
		}
		h = h->str;
	}
	return (count)
