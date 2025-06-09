#include <stddef.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in h
 * @h: a singly linked list
 *
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
