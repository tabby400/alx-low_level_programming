#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - function adds node to the end of the list
 *
 * @head: points to the head of the list_t list
 * @str: string to add to list
 *
 * Return: address of added element otherwise NULL if fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *added;
	list_t *last = *head;

	while (str[len])
	{
		len++;
	}
	added = malloc(sizeof(list_t));
	if (added == NULL)
	{
		return (NULL);
	}
	else
	{
		added->str = strdup(str);
		added->len = len;
		added->next = NULL;
	}
	if (*head == NULL)
	{
		*head = added;
		return (added);
	}
	while (last->next)
	{
		last = last->next;

	}
	last->next = added;

	return (added);

}
