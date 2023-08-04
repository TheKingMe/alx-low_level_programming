#include "main.h"
#include <string.h>
/**
 *_strcmp - cmp two string
 *@s1:string 1
 *@s2:string 2
 *Return: str1 -
 */
int _strcmp(char *s1, char *s2)
{
char *str1 = s1;
char *str2 = s2;
while (*str1 != '\0' && *str2 != '\0' && *str1 == *str2)
{
str1++;
str2++;
}
return (*str1 - *str2);
}
