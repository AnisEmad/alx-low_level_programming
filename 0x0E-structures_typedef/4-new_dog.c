#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * new_dog - creates a new dog
  * @name: name of the dog 
  * @age: age of the dog
  * @owner: name of the owner of the dog
  * Return: return a variable of type dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc(sizeof(name) + 1);
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc(sizeof(owner) + 1);
	if (doggy->owner == NULL)
	{
		free(doggy->name);
		free(doggy);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';
	doggy->age = age;
	for (i = 0; owner[i]; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';
	return (doggy);
}
