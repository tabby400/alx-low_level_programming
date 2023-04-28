#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - finction that addas a node at beginning
 *          of listint_t list
 * @head: point to the head of the listint_t list
 * @n: the new node integer
 *
 * Return: the address of new node otherwise NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;/*pointer to the linked list*/

	p = malloc(sizeof(listint_t));

	if (p == NULL)
	{
		return (NULL);
	}

	(*p).n = n;
	(*p).next = *head;
	*head = p;

	return (p);
}
