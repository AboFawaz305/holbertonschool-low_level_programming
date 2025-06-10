#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * _add_dnodeint_end - a helper function for add_dnodeint_end
 * @head: the begining of a doubly linked list
 * @new_node: the new_node to append
 *
 * Return: the address of the new_node
 */
dlistint_t *_add_dnodeint_end(dlistint_t **head, dlistint_t *new_node)
{
	if (new_node == NULL)
		return (NULL);
	if (head == NULL)
		return (new_node);
	if (*head == NULL)
	{
		new_node->prev = NULL;
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if ((*head)->next == NULL)
	{
		new_node->prev = *head;
		new_node->next = (*head)->next;
		(*head)->next = new_node;
		if (new_node->next != NULL)
			new_node->next->prev = new_node;
		return (new_node);
	}
	return (_add_dnodeint_end(&(*head)->next, new_node));
}

/**
 * add_dnodeint_end - create a new ndoe and add it at the end of head
 * @head: a doubly linked list
 * @n: the value of the newly created node
 *
 * Return: the address of the newly created node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(*new_node));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	return (_add_dnodeint_end(head, new_node));
}
