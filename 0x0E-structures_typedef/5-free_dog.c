#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - frees memory used by dog.
 * @d: the dog struct
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
