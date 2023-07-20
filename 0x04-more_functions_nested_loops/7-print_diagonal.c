#include "main.h"
/**
*print_diagonal - diagonal
*@n:line numbers
*/
void print_diagonal(int n)
{
int i;
int j;
for (i = 1; i <= n; i++)
{
for (j = 1; j <= i - 1; i++)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
