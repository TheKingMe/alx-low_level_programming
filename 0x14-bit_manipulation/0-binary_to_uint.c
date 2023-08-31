#include "main.h"
/**
 * binary_to_uint - that converts a binary number to an unsigned int
 * @b: Binary string
 * Return: decimal
*/
unsigned int binary_to_uint(const char *b)
{
int n, i, d;
n = 0;
d = 1;
if (b == NULL)
return (0);
for (i = 0; b[i] != '\0'; i++)
;
i -= 1;
for (; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
if (b[i] == '1')
{
n += d;
d *= 2;
}
if (b[i] == '0')
d *= 2;
}
return (n);
}
