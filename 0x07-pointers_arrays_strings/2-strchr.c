#include <stddef.h>
#include "main.h"
/**
*_strchr - that locates a character in a string
*@s:string
*@c:char
*Return:i or Null
*/
char *_strchr(char *s, char c)
{
while (*s++)
{
if (*s == c)
return (s);
}
return (NULL);
}
