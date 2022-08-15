#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 * @h: head of the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;
	int i;
	
	while (h != NULL)
	{
		printf("%d", h->n);
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
