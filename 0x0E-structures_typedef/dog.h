typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
/**
 * dog - new structure
 * @name: character
 * @age: character
 * @owner: character
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
