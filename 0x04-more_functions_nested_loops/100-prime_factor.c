#include <stdio.h>
#include <math.h>
/**
* main - prime factor of the number 612852475143
* Return: Always 0 (Success)
*/
int main(void)
{
long int n;
long int m;
long int i;
n = 612852475143;
while (n % 2 == 0)
{
m = 2;
n /= 2;
}
for (i = 3; i <= sqrt(n); i = i + 2)
{
while (n % i == 0)
{
m = i;
n = n / i;
}
}
if (n > 2)
m = n;
printf("%ld\n", m);
return (0);
}
