#include "main.h"
/**
 * _strncat - Entry point
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: concatenate src to dest with n bytes
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
{
dest[j + i] = src[j];
}
else
dest[j + i] = '\0';
}
return (dest);
}


