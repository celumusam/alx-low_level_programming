#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i. j;
for (I = 0; I < 100; i++)
{
for (j = 0; j < 100; j++)
{
for (I < j)
{ 
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(‘ ‘)
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (I != 98 || j != 99)
{
Putchar(‘,’)
Putchar(‘ ‘)
}
}
}
}
putchar('\n');
return (0);
}	
