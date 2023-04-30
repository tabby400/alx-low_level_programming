#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of
 *                        listint_t linked list
 * @index: the node to be found in the linked list listint_t
 * @head: the first node in the linked list listint_t
 *
 * Return: a pointer to the specific node otherwise NULL if
 *             the node does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	for (; y < index ; y++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		else
			head = head->next;
	}

	return (head);
}
