#include "lists.h"

/**
 * sum_dlistint - sums all the data of a dlistint
 * @head: head of the dlistint_ list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
