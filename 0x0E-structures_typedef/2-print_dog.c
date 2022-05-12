#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
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
		printf("Name: (nil)\n");
	}
	else if (isnan(d->age))
	{
		printf("Age: (nil)\n");
	}
	else if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
