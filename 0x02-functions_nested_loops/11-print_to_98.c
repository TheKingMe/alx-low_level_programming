#include "main.h"
/**
 * print_to_98 - print all natural numbers from n to 98.
 * @n: the number to start counting from n to 98
 * Return: Always 0.
 */
void print_to_98(int n)
{
int i;
if (n == 98)
printf("%d", 98);
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
if (i == 97)
printf("%d", 98);
}
}
if (n > 98)
{
for (n = n; n > 98; n--)
{
printf("%d, ", n);
if (n == 99)
printf("%d", 98);
}
}
printf("\n");
}
