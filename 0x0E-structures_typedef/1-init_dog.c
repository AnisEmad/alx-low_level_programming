#include "dog.h"
/**
  * init_dog - intialize a variable of type struct dog
  * @d: the dog
  * @name: the name
  * @age: the age of the dog
  * @owner: the owner of the dog
  * Return: void
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->.age = age;
	d->owner = owner;
}