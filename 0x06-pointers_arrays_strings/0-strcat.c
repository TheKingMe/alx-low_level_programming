#include "main.h"
/**
*_strcat - concatenates two strings
*@dest: string 1
*@src: string 2
*Return: dest
*/
char *_strcat(char *dest, char *src)
{
int i, j, d = strlen(dest), s = strlen(src);
for (i = d, j = 0; i < d + s, j < s; i++, j++)
{
dest[i] = src[j];
}
return (dest);
}

