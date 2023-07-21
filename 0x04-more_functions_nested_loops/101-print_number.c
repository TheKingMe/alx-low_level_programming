#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer 
 */
void print_number(int n)
{
unsigned int n1;
if (n < 0)
{
m = -n;
_putchar('-');
}
else
{
m = n;
}
if (m / 10)
{
print_number(m / 10);
}
_putchar((m % 10) + '0');
}
