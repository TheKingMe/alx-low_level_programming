#include "lists.h"
/**
*print_list - printf a dtring in structure
*@h: The structure
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
if (h->str == NULL)
{
write(1, "[0] (nil)", 9);
}
int i;
int j = 0;
while (next[j])
{
for (i = 0; i <= h->len; i++)
{
_putchar(h->str[i]);
}
j++;
}
return (j);
}
