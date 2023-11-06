#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - Frees malloc for dog_t
  * @d: Pointer to the dog_t to be freed
  */

void free_dog(dog_t *d)
{
if (d != NULL)

{
if (d->name != NULL)
free(d->name);

if (d->owner != NULL)
free(d->owner);

free(d);
}
}
