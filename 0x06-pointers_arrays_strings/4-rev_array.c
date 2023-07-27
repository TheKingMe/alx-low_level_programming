#include "main.h"
#include <string.h>
/**
*reverse_array - reverse int array
*@a:array
*@n: array size
*/
void reverse_array(int *a, int n)
{
int *s, *b, c;
int i;
s = a;
b = a;
for (i = 0; i < n - 1; i++)
{
b++;
}
for (i = 0; i < n / 2; i++)
{
c = *b;
*b = *s;
*s = c;
s++;
b--;
}
}
