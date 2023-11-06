#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Variable type struct dog
 * @d: The pointer
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)

{
if (d == NULL)
return;
(*d).name = name;
d->age = age;
d->owner = owner;
}
