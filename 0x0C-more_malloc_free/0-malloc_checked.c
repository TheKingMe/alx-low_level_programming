#include "main.h"
/**
*malloc_checked - test malloc if worked
*@b: size
*Return: 98 if dont work
*/
void *malloc_checked(unsigned int b)
{
void *s;
s = malloc(b);
if (s == NULL)
{
exit (98);
}
return (s);
}
