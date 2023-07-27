#include "main.h"
#include <string.h>
/**
*_strncpy - copy src to dest with n char
*@dest: string 2
*@src: string 1
*@n: number
*Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, s = strlen(src);
if (n > s)
n = s;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
dest[n] = '\0';
return (dest);
}
