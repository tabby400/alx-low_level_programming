#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function that frees the listint_t list and
 * sets the head to NULL
 *
 * @head: points to the head of the linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}

	*head = NULL;
}
