#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - free a singly linked list
 * @head: a singly linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free(head->str);
	free_list(head->next);
	free(head);
}
