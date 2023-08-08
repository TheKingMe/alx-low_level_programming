#include <stdlib.h>
#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *s;
unsigned int i = 0, j = 0, n = 0, m = 0;
while (s1 && s1[n])
n++;
while (s2 && s2[m])
m++;
s = malloc(sizeof(char) * (n + m + 1));
if (s == NULL)
return (NULL);
i = 0;
j = 0;
if (s1)
{
while (i < n)
{
s[i] = s1[i];
i++;
}
}
if (s2)
{
while (i < (n + m))
{
[i] = s2[j];
i++;
j++;
}
}
s3[i] = '\0';
return (s);
}
