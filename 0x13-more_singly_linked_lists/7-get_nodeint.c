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
	int i = 0;

	temp = head;
	if (!temp)
		return (NULL);
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
}


