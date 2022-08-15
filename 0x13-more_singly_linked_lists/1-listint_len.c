#include "lists.h"

/**
 * listint - number of elements in a linked listint_t
 * @h: List to check
 * Return: number of elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t number_of_elements = 0;
	listint_t *p = h;

	while (p->next != NULL)
	{
		number_of_elements++;
		p = p->next;
	}
	return (number_of_elements);
}
