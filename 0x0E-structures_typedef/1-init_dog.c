#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initializes a dog structure
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
if (d != '\0')
{
d->name = name;
d->age = age;
d->owner = owner;
}
else
{
return;
}
