#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - function that add a new node at the end
 *                  of the listint_t list
 * @head: points to the head in the list listint_t
 * @n: the new node integer
 *
 * Return: the address of new elementotherwise NULL if fails
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last;
	listint_t *p = (*head);

	last = malloc(sizeof(listint_t));

	if (last == NULL)
	{
		return (NULL);
	}

	last->n = n;
	last->next = NULL;/*it is the last element*/

	if (*head == NULL)
	{
		*head = last;
		return (last);
	}

	while ((*p).next)/* to go through the list*/
	{
		p = (*p).next;
	}

	(*p).next = last;

	return (last);

}
