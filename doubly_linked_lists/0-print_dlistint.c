#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print a doubly linked list
 * @h: a doubly linked list
 *
 * Return: the number of elements in h
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
