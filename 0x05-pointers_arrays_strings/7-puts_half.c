#include "main.h"
/**
*puts_half - prints half of a string
*@str: string
**/
void puts_half(char *str)
{
int i, n = strlen(str);
if (n % 2 != 0)
{
n = n / 2 + 1;
}
else
{
n /= 2;
}
for (i = n; str[i] != '\0'; i++)
{
printf("%c", str[i]);
}
printf("\n");
}
