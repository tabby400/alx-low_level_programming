#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 *                      index of a linked list listint_t
 * @head: points to the head of the linked list
 * @index: shows the index with the node that has to be deleted
 *
 * Return: 1 if it succeeds, otherwise -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int data = 0;
	listint_t *p = *head;
	listint_t *now = NULL;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;/*update the head pointer*/
		free(p);
		return (1);
	}

	for (data = 0 ; data < (index - 1) ; data++)
	{
		if (!p || !p->next)
		{
			return (-1);
		}
		else
			p = p->next;
	}
	now = p->next;/*p point to the one preceeding*/
	p->next = now->next;/*pointer to now is updated*/
	free(now);/*frees memory that was for deleted node*/

	return (1);

}
