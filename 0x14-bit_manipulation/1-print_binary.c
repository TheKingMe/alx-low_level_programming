#include "main.h"
/**
 * print_binary - that prints the binary representation of a number
 * @n: Number
*/
void print_binary(unsigned long int n)
{
unsigned long int i;
int d;
if (n == 0)
{
printf("0");
return;
}
for (i = n, d = 0; (i >>= 1) > 0; d++)
;
for (; d >= 0; d--)
{
if ((n >> d) & 1)
	printf("1");
	else
	printf("0");
}
}
