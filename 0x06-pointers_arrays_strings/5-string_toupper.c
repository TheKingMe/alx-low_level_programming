#include "main.h"
#include <string.h>
/**
*string_toupper - lower will be upper
*@str:string
*Return: str
*/
char *string_toupper(char *str)
{
char *ptr = str;
while (*ptr++)
{
if (*ptr <= 'z' && *ptr >= 'a')
ptr = ptr - ('a' - 'A');
ptr++;
}
return (str);
}
