#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head node
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int p;

	temp = *head;
	if (temp == NULL)
		return (0);
	*head = temp->next;
	p = temp->n;
	free(temp);
	return (p);
}
