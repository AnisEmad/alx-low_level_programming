#include "dog.h"
/**
  * new_dog - creates a new dog
  * @name: name of the dog 
  * @age: age of the dog
  * @owner: name of the owner of the dog
  * Return: return a variable of type dog
  */
dog_t *new_dog(char *name, float age, cahr *owner)
{
	dog_t *doggy;

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = name;
	doggy->age = age;
	doggy->owner= owner;
	return doggy;
}
