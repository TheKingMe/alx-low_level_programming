#include "main.h"
/**
*prime_recursion - calculates if a number is prime recursively
*@n: number
*@i: iterator
*Return: 1 if n is prime, 0 if not
*/
int prime_recursion(int n, int i)
{
if (i == 1)
return (1);
if (n % i == 0 && i > 0)
return (0);
return (prime_recursion(n, i - 1));
}
/**
*is_prime_number - says if an integer is a prime number or not
*@n: number to evaluate
*Return: 1 if n is a prime number, 0 if not
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime_recursion(n, n - 1));
}
