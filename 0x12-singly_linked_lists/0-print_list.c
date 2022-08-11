#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: its arguement
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	if (h->str == 'NULL')
	{
		printf("[0] (nil)");
	}
	else
	{
		while (h->str != 'NULL')
		{
			count = printf("[%d] (%s)\n", h->len, h->str);
			h = h->next;
		}
	return (count);
}