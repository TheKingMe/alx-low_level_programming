#include "main.h"
#include <string.h>
/**
*print_array - array
*@a: string
*@n: number
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%c", a[i]);
}
}
