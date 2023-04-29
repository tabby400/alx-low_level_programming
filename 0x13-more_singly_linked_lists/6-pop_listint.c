#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * pop_listint - function delete the head node of listint_t and
 * returns the data of the head node
 *
 * @head: point to the head of the listint_t list
 *
 * Return: the data in the deleted nodes, otherwise 0 if list was empty
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		p = *head;
		data = (*head)->n;
		*head = (*head)->next;
		free(p);
	}

	return (data);
}
