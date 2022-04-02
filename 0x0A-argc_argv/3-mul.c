#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: input
 * @argv: input
 * Return: return an integer
 */
int main(int argc, char *argv[])
{
int product = 1;
int i;
if (argc < 3)
{
fprintf(stderr, "Error\n");
exit(0);
}
else if  (argc > 1 && argc == 3)
{
for (i = 1; i < argc; i++)
{
product *= atoi(argv[i]);
}
printf("%d\n", product);
}
return (0);
}
