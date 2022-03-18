#include "main.h"
#include <stdio.h>
/**
 * fizzbuzz - Entry point
 */
void fizzbuzz(void)
{
int i;
for (i = 0; i <= 100; i++)
{
if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else if (i % 15 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d ", i);
}
}
}
