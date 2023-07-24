#include "main.h"
/**
*rev_string - reverse the string
*@s: the string
*/
void rev_string(char *s)
{
int i = 0, j = 0;
char *sr = s;
while (s[i] != '\0')
i++;
int n=i;
for (i = n - 1; i >= 0; i--)
{
s[j] = sr[i];
j++;
}
}
