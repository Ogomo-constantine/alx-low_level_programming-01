#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Return: NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, lN, lO;

	struct dog *n_dog = NULL;

	lN = 0;
	while (name[lN] != '\0')
		lN++;
	lO = 0;
	while (owner[lO] != '\0')
		lO++;
	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(lN + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(lO + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= lN; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= lO; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}
