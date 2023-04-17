#include "dog.h"

void free_dog(dog_t *d);

/**
 * free_dog - frees dog
 * Description: a function
 * @d: pointer to struct dog
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
