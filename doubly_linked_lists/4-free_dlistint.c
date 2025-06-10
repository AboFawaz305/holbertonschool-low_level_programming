#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - free a doubly linked list
 * @head: a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
