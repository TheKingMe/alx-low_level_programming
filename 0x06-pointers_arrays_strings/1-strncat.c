#include "main.h"
#include <string.h>
/**
*_strncat - concatenates two strings with n
*@dest: dtring 1
*@src: string 2
*@n: n string
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i, j, d = strlen(dest), s = strlen(src);
if (n > s)
n = s;
for (i = d, j = 0; i < d + n && j < n; i++, j++)
{
dest[i] = src[j];
}
dest[n + d] = '\0';
return (dest);
}
