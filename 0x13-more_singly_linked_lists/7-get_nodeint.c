#include "liists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the linked list
 * @index: index of the node to return
 * Return: A pointer to the nth element if it exits
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	while (temp != NULL && (i < index))
	{
		temp = temp->next;
		i++;
	}
	return (temp);
}


