#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint - add a new node to a doubly linked list
 * @head: a doubly linked list
 * @n: the value of the newly created node
 *
 * Return: the address of the newly created node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	if (head == NULL || *head == NULL)
	{
		new_node->next = NULL;
		if (head != NULL)
			*head = new_node;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	return (new_node);
}
