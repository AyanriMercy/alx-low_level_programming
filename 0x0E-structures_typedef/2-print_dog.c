#include "dog.h"

void print_dog(struct dog *d);

/**
 * print_dog - prints a struct dog
 * Description: a function
 * If an element of d is NULL, print (nil) instead of this element.
 * (if name is NULL, print Name: (nil)). If d is NULL print nothing.
 * @d: input pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: %p\n", d->name);
		else
			printf("Name: %s\n", (*d).name);
		if (d->age == 0)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %f\n", (*d).age);
		if (d->owner == NULL)
			printf("Owner: %p\n", d->owner);
		else
			printf("Owner: %s\n", (*d).owner);
	}
}
