#include "main.h"
/**
 * _strcmp - Entry point
 * @s1: First input
 * @s2: Second input
 * Return: Returns negative number or positive number after comparison
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
int j = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
j += s1[i] - s2[i];
return (j);
}
