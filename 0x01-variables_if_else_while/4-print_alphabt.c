#include <stdio.h>
/**
* main - Entry point
* return: Always 0 (Success)
*/
int main(void)
{
/**
* main - Entry point
* return: Always 0 (Success)
*/
char alphabet;
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
if (alphabet == 'q')
continue;
else if (alphabet == 'e')
continue;
putchar(alphabet);
}
putchar('\n');
return (0);
}
