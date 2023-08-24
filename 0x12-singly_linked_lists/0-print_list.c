#include "lists.h"
/**
*print_list - printf a dtring in structure
*@h: The structure
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
int i;
int j = 0;
while (next[j])
{
for (i = 0; i <= h->len; i++)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
count++;
}
else
printf("[%d] %s\n");
j++;
}
return (j);
}
