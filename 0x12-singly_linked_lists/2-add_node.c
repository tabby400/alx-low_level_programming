#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - function adds a new node at beginning of list
 *
 * @head: points to the head in the list_t list
 * @str: the string to add to list_t
 *
 * Return: address of added element otherwise NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *added;

	while (str[len])
	{
		len++;
	}
	added = malloc(sizeof(list_t));

	if (added == NULL)
	{
		return (NULL);
	}
	added->str = strdup(str);
	added->len = len;
	added->next = *head;
	*head = added;

	return (*head);
}
