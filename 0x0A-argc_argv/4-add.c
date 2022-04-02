#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry
 * @argc: input
 * @argv: input
 * Return: return 0
 */
int main(int argc, char *argv[])
{
int i;
int j;
int sum;
if (argc <= 1)
{
printf("0\n");
}
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
