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
	if (d == 0)
		return;
	if (d->name == 0)
		printf("Name: (nil)\n");
	else
		printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	if (d->owner == 0)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
