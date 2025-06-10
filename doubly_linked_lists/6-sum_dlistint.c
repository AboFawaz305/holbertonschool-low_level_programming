#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - returns the sum of nodes at head
 * @head: a doubly linked list
 *
 * Return: the sum of head nodes
 */
int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);

	return (head->n + sum_dlistint(head->next));
}
