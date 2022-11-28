#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sums values from linked list
 * @head: A pointer listint_t structure
 * Return: The sum of all the data n from list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
