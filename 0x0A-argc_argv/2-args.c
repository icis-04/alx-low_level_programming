#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: input
 * @argv: input
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%d\n", argv[i]);
}
return (0);
}
