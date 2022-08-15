#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t
 * @h: head of the list
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
