#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * init_dog - initialize a variable of type struct dog
 * Description: a function
 * @d: struct dog variable to be initialized
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
