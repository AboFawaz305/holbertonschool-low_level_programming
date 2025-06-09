
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in h
 * @h: a doubly linked list
 *
 * Return: the number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
