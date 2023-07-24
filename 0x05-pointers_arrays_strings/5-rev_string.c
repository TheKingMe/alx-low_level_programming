#include "main.h"
/**
*rev_string - reverse the string
*@s: the string
*/
void rev_string(char *s)
{
int i = 0, j = 0, n;
while (s[i] != '\0')
{
i++;
}
n = i;
for (i = 0, j = n - 1; i < j; i++, j--)
{
char temp = s[i];
s[i] = s[j];
s[j] = temp;
}
s[n] = '\0';
}
