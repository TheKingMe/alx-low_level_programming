#include "lists.h"
/**
*print_listint - printf a dtring in structure
*@h: The structure
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
size_t m;
m = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
m++;
}
return (m);
}
