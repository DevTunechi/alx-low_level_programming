#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * init_dog - Initializes a struct dog variable
 * @d: Pointer to the struct dog variable
 * @name: Pointer to string representing the dog's name
 * @age: The dog's age
 * @owner: Pointer to string representing dog owner's name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
else
{
printf("Error: Invalid pointer to struct dog\n");
exit(EXIT_FAILURE);
}
}
