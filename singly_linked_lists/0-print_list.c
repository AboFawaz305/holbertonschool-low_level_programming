#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_list - prints all the elements of h
 * @h: a singly linked list
 *
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
			printf("[%d] %s\n", current->len, "(nil)");
		else
			printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		i++;
	}

	return (i);
}
