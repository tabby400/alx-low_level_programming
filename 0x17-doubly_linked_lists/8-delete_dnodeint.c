#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes node
 * at an index
 *
 * @head: points to the head of the list
 * @index: the index belonging to the node to delete
 *
 * Return: 1 on succession, otherwise -1
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cpy = *head;

	if (!*head)
	{
		return (-1);
	}

	for (; index != 0; index--)
	{
		if (cpy == NULL)
			return (-1);
		cpy = cpy->next;
	}

	if (cpy == *head)
	{
		*head = cpy->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}

	else
	{
		cpy->prev->next = cpy->next;
		if (cpy->next != NULL)
		{
			cpy->next->prev = cpy->prev;
		}
	}

	free(cpy);
	return (1);
}
