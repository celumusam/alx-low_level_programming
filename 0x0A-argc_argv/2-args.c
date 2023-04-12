#include "main.h"
#include <stdio.h>

/**
 * main - Print all the args content
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always zero
 */
int main(int argc, char *argv[])
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
