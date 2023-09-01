#include "main.h"
/**
 * clear_bit -  that sets the value of a bit to 0 at a given index
 * @n: pointer to decimal
 * @index: index position 
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int d;

	if (index > 64)
		return (-1);
	d = index;
	for (i = 1; d > 0; i *= 2, d--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
