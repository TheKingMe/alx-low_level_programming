#include "main.h"
#include <stddef.h>
/**
 *_strpbrk - that searches a string for any of a set of bytes
 *@s:string
 *@accept:string
 *Return: s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s++)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
return (s);
}
}
}
return (NULL);
}
