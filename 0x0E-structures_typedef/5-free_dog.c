#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - frees the dog variable
  * @d: the dog used
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
