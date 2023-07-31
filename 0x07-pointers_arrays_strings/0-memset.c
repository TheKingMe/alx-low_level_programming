#include "main.h"
/**
*_memset - that fills memory with a constant byte
*@s:string memory
*@b:constant
*@n:int
*Return:s
*/
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
}
