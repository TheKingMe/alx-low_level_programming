#include "lists.h"
/**
 * add_nodeint - adds a new node
 * @head:  linked list.
 * @n: string to store in the list.
 * Return: address of the head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
