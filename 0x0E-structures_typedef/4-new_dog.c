#include "dog.h"

/**
 * *_strdup -  returns a pointer to a newly allocated space in memory
 *  which contains a copy of the string given as a parameter
 *  Description: a function that returns a pointer to a null-terminated byte
 *  string which is a duplicate of the string pointed to by str.
 *  The memory obtained is done dynamically using malloc and
 *  hence it can be freed using free()
 *
 *  @str: pointer string
 *  Return: pointer to the duplicated string str on success
 *  Returns NULL if str = NULL, if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *dup_string;
	int number = 0;
	int size = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (number = 0; *(str + number) != '\0'; number++)
		;

	dup_string = malloc(number * sizeof(char) + 1);

	if (dup_string == NULL)
	{
		return (NULL);
	}

	for (size = 0; size < number; size++)
	{
		dup_string[size] = str[size];
	}
	dup_string[number] = '\0';
	return (dup_string);
}

/**
 * *new_dog - creates a new dog
 * Description: a function
 * You have to store a copy of name and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog created
 * Return NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}

	newdog->name = _strdup(name);
	if (newdog->name == 0)
	{
		free(newdog);
	}

	newdog->age = age;
	newdog->owner = _strdup(owner);
	if (newdog->owner == 0)
	{
		if (newdog->name != 0)
		{
			free(newdog->name);
			free(newdog);
		}
	}
	return (newdog);
}
