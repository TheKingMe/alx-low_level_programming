#include "main.h"
#include <string.h>
/**
*_strcayt - lcontract 2string
*@dest: string 2
*@src: string 1
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, d = strlen(dest), s = strlen(src);
for (i = d, j = 0; i < d + s, j < s; i++, j++)
{
dest[i] = src[j];
}
return (dest);
}
