#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success/correct)
*/
int main(void)
{
int l;
int r;
int c;
for (l = 48; l <= 57; l++)
{
for (c = l + 1; c <= 57; c++)
{
for (r = c + 1 ; r <= 57; r++)
{
putchar(l);
putchar (c);
putchar (r);
if  ((l == 55) && (c == l + 1) && (r == c + 1))
{
break;
}
putchar(',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}
