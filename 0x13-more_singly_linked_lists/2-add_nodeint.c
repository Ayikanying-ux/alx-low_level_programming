#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pinter to the head of the list
 * @n: integer to be used as content
 * Return: address of the newly created node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
