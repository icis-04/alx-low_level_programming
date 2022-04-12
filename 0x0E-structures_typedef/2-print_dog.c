#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints dog's characteristics
 * @d: struct 
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("nil");
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}

