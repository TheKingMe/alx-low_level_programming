#include "main.h"
#include <string.h>
/**
*reverse_array - reverse int array
*@a:array
*@n: array size
*/
void reverse_array(int *a, int n)
{
int i;
int b[n];
int j = n - 1;
for (i = 0; i < n; i++)
{
b[i] = a[j];
j--;
}
for (i = 0; i < n; i++)
{
a[i] = b[i];
}
}
