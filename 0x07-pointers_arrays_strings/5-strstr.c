#include "main.h"
#include <stddef.h>
/**
*_strstr - that locates a substring
*@haystack: find in
*@needle: to find
*Return:NULL or needle
*/
char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (!needle[j])
return (needle);
}
return (NULL);
}
