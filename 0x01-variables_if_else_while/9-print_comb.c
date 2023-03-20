#include <stdio.h>

/**
 * main – main function
 * Descripution: print all single number of base 10
 * starting from 0, following a new line
 * Return: 0
 */

int main(void)
{
int i;

for (i = 0 ; i < 10 ; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
