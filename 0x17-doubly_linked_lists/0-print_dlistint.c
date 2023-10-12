#include "lists.h"

/**
 * print_dlistint -that prints all the elements of a dlistint_t list.
 * @h: pointer to head node
 * Return:the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		num++;
	}
	return (num);
}
