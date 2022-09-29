#include "lists.h"

/**
 * sum_dlistint - a function that returns
 * the sum of all the data  of a linked list.
 * @head: the pointer to the first node
 * Return: sum of all datas of a list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int count = 0;

	if (head == NULL)
		return (count);
	temp = head;
	while (temp->next != NULL)
		count += temp->n;
	return (count);
}
