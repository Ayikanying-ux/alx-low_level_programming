#include "lists.h"

/**
 * sum_listint - sums up all the data (n) of a listint_t linked list
 * @head: pointer to the first element
 * Return: sum of all data (n) of a listint_t
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	if (temp == NULL)
		return (0);
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
