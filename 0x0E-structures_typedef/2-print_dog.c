#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - function that prints a struct dog
 * @d: pointer
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else if (d->name == NULL)
	{
		printf(Name: (nil));
	}
	else if (d->age == NULL)
	{
		printf(Age: (nil));
	}
	else if (d->owner == NULL)
	{
		printf(Owner: (nil));
	}
	else
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}


				
