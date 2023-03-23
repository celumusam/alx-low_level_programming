#include "main.h"
#include <stdio.h>

/**
 * print_number - Print an integer.
 * @n: The integer to prints.
 */

void print_number(int n)
{

unsigned int n1;

if (n < 0)
{
n1 = -n;
_putchar('_');
}
else
{
n1 = n;
}
if (n1 / 10)
{
print_number(n1 / 10);
}
_putchar((n1 % 10) + '0');
}
