#include "main.h"
/**
*cap_string - first word
*@str: string
*Return: str
*/
char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (str[i - 1] == ' ' || str[i - 1] == '\t'
|| str[i - 1] == '\n')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
if (str[i - 1] == ',' || str[i - 1] == ';')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
if (str[i - 1] == '.' || str[i - 1] == '!')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
if (str[i - 1] == '?' || str[i - 1] == '"')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
if (str[i - 1] == '(' || str[i - 1] == ')')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
if (str[i - 1] == '{' || str[i - 1] == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
}
if ((str[0] >= 97 && str[0] <= 122))
{
str[0] = str[0] - 32;
}
}
return (str);
}
