#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: Dog name
 * @age: Dog age
 * @owner: Dog owner
 * Description: uses new ptr that inits the struct info and copy the args
 * the strings are stored and copy using strcpy logic (malloc)
 * Return: on success pointer to new dog, or NULL if program fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/* 'l' is for lenght, 'n' for name and 'o' for owner */
	unsigned int nl, ol, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nl = 0; name[nl]; nl++)
		;
	nl++;
	dog->name = malloc(nl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol]; ol++)
		;
	ol++;
	dog->owner = malloc(ol * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
