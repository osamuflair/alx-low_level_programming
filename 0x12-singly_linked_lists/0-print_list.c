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
	int count = 0;

	if (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		printf("\n");
		else
		{
			while (h->str != NULL)
			{
				printf("[%u] %s\n", h->len, h->str);
				count++;
				h = h->next;
			}
		}
	}
	return (count);
}
