#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - function that returns sum of all the data
 * in the linked list listint_t
 *
 * @head: the first node in the linked list listint_t
 *
 * Return: the sum of data in the list otherwise 0, if
 * list is empty
 */

int sum_listint(listint_t *head)
{
	int sumresult = 0;

	while (head) /*going through the list*/
	{
		sumresult = sumresult + head->n;
		head = head->next;

	}

	return (sumresult);
}
