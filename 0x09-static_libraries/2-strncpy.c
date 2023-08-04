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
int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}
