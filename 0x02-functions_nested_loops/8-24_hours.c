#include "main.h"
/**
* jack_bauer -prints every minute of the day
*
* Return: Always 0.
*/
void jack_bauer(void)
{
int i, j, k, l;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 9; j++)
{
if (j == 4 && i == 2)
break;
for (k = 0; k <= 6; k++)
{
if (j == 4 && i == 2)
break;
if (k == 6)
continue;
for (l = 0; l <= 9; l++)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
}
}
}
}
}
