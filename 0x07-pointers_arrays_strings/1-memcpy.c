#include "main.h"
/**
*_memcpy - that copies memory area
*@dest:copie to
*@src:to copie
*@n:bytes from memory area
*Return:dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
