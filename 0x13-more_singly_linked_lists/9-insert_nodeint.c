#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts a new node at a given
 *                          position
 * @head: this points to the head in the linked list
 * @idx: this is where the new node should be added in the linked list
 * @n: the integer to insert in the new node
 *
 * Return: the address of the new node, otherwise NULL if it is not
 *         possible to add
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int s;
	listint_t *added;
	listint_t *p = *head;

	added = malloc(sizeof(listint_t));

	if (added == NULL && head == NULL)
	{
		return (NULL);/*if cannot be added*/
	}
	else
	{
		added->n = n;
		added->next = NULL;
	}

	if (idx == 0)
	{
		added->next = *head;
		*head = added;
	}

	for (s = 0 ; p && s < idx ; s++)
	{
		if (s == idx - 1)/*idx - 1 is the node with the address of new node*/
		{

			added->next = p->next;
			p->next = added;
			return (added);
		}
		else
		{
			p = p->next;/*if we have not reached desired index*/
		}
	}
	return (NULL);/*not adding new node*/

}


