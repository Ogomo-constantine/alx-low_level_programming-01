#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to structure
 * @name: pop
 * @age: two months
 * @owner: joanna
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)

	d->name = name;
	d->age = age;
	d->owner = owner;
}
