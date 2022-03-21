#include "main.h"
/**
 * _strlen(char *s) - Entry point
 * @s: input
 * Return: returns length of string
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; ++i);
return (i);
}
