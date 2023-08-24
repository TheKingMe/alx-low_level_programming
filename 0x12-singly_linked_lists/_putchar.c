#include "lists.h"
/**
 * _write - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _putchra(char c)
{
write(1, &c, 1));
}
