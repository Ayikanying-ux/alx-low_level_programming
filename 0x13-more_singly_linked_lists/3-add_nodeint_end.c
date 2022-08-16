#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a list
 * @head: pointer to the first element in a node of a list
 * @n: number to be added
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *p = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	else
	{
		new_node->n = n;
		new_node->next = NULL;
	}
	if (p != NULL)
	{
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = new_node;
	}
	else
	{
		p->next = new_node;
	}
	return (new_node);
}
