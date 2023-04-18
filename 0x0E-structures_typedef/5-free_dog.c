#include "dog.h"
/**
  * free_dog - frees the dog variable 
  * @d: the dog used
  * Return: void
  */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}
