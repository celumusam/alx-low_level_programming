#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: The string to be printed
 */
void _print_re_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
