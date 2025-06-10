#include <stddef.h>
#include "lists.h"

/**
 * _get_dnodeint_at_index - a helprt function for get_dnodeint_at_index
 * @head: a doubly linked list
 * @index: the index to retrieve
 * @i: the start index
 *
 * Return: the node at index in head or NULL on failure
 */
dlistint_t *_get_dnodeint_at_index(dlistint_t *head, unsigned int index,
		unsigned int i)
{
	if (head == NULL)
		return (NULL);
	if (i == index)
		return (head);
	return (_get_dnodeint_at_index(head->next, index, i + 1));
}

/**
 * get_dnodeint_at_index - get a node at index
 * @head: a doubly linked list
 * @index: the index of the node to retrieve
 *
 * Return: the node at index in head or NULL on failure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	return (_get_dnodeint_at_index(head, index, 0));
}
