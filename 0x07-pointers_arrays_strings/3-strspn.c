#include "main.h"
/**
*_strspn - that gets the length of a prefix substring
*@s:string
*@accept:string to find
*Return:f
*/
unsigned int _strspn(char *s, char *accept)
{
int i, j, f = 0, n;
for (i = 0; s[i] != '\0'; i++)
{
n = 0;
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
n = 1;
f++;
}
}
if (n == 0)
return (f);
}
return (0);
}
