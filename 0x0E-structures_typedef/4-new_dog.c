#include "dog.h"
#include <stdlib.h>
/**
 * *new_dog -  function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}


	a = (dog_t *) malloc(sizeof(dog_t));
	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		a->name = name;
		a->age = age;
		a->owner = owner;
	}
	free(a);
	return (a);
}
