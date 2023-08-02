#include "main.h"
/**
*recursive_sqrt - recurses to find the natural
*@n: number to calculate the sqaure
*@i: iterator
*Return: the resulting square root
*/
int recursive_sqrt(int n, int i)
{
if (i * i > n)
return (-1);
if (i * i == n)
return (i);
return (recursive_sqrt(n, i + 1));
}
/**
*_sqrt_recursion - returns the natural square root of a number
*@n:number to calculate the square root of
*Return: the resulting square root
*/
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (recursive_sqrt(n, 0));
}
