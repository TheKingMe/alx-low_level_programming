#include "variadic_functions.h"
/**
*print_numbers - number for print
*@n: number of arg
*@separator: separator
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
va_start(list, n);
for (i = 0; i < n; i++)
printf(" %d%s", va_arg(list, int), separator);
va_end(list);
printf("\n");
}
