#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * reverse_listint - a function which reverses a linked list
 *
 * @head: this points to the address of the head of listint_t list
 *
 * Return: a pointer to the first node in the reversed linked list
 *         listint_t
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *end;
	listint_t *b4;

	if (!head || !*head)
	{
		return (NULL);
	}

	end = NULL;

	while ((*head)->next != NULL)
	{
		b4 = (*head)->next;
		(*head)->next = end;
		end = *head;
		*head = b4;
	}
	(*head)->next = end;

	return (*head);
}
