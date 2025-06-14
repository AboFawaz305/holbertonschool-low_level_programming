#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print a singly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */
size_t print_list(const struct list_s *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}

	return (count);
}
