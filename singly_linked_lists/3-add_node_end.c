#include <stdlib.h>
#include <string.h>
#include <stddef.h>
#include "lists.h"

/**
 * _strlen - returns the length of s
 * @s: a null terminated string
 *
 * Return: the length of s
 */
unsigned int _strlen(const char *s)
{
	if (s == NULL)
		return (0);
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * add_node_end - append a node with value str on list head
 * @head: a singly linked list
 * @str: the value of the new node
 *
 * Return: the address of the newly element or NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
		return (NULL);
	if (str != NULL)
	{
		new_node->str = strdup(str);
		if (new_node->str == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	else
	{
		new_node->str = NULL;
	}
	new_node->len = _strlen(str);
	if (head == NULL || *head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
}

