#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - stores a copy of the original dog structure
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *poppy;
poppy = malloc(sizeof(dog_t));
if (poppy == NULL)
{
return (NULL);
}
poppy->name = name;
poppy->age = age;
poppy->owner = owner;
return (poppy);
}


